#include<iostream>
using namespace std;
int max(int arr[],int n)
{   int maxx=arr[0];
    for(int i=1;i<n;i++)
    {   
        if(maxx<arr[i])
        {
            maxx=arr[i];
        }
    }
    return maxx;
}
int min(int arr[],int n)
{
    int minx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (minx >arr[i])
        {
            minx = arr[i];
        }
    }
    return minx;
}
int main()
{   int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a1=max(arr,n);
    int a2 = min(arr, n);
    cout<< "max element of an array: " << a1<< endl;
    cout<<"min. element of an array: "<<a2<<endl;
    cout<<"sum of max and min of an array: "<<max(arr,n)+min(arr,n);

}