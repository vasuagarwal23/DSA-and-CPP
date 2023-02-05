#include<iostream>
using namespace std;
int binary(int arr[],int n,int x)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int arr[100];
    int n;
    int x;
    cin>>n;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=binary(arr,n,x);
    cout<<ans;

}