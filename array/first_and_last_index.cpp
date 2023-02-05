#include <iostream>
using namespace std;
int first(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans=-1;
    while (start <= end)
    {
        if (arr[mid] == x)
        {
            ans= mid;
            end=mid-1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else if(arr[mid]>x)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int last(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans=-1;
    while (start <= end)
    {
        if (arr[mid] == x)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else if(arr[mid]>x)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    int arr[100];
    int n;
    int x;
    cin >> n;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"print";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    int ans1 = first(arr, n, x);
    cout << "1..."<<ans1<<endl;
    int ans2=last(arr,n,x);
    cout<<"2..."<<ans2;
}