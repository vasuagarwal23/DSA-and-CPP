#include<iostream>
using  namespace std;
int binary(int arr[],int n,int x,int start,int end)
{
    //basecase
    if(start>end)
    {
        return -1;
    }
    //recursive relation
    int mid=(start+end)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        end=mid-1;
    }
    else
    {
        start=mid+1;
    }
    return binary(arr,n,x,start,end);
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    int x;
    cin>>x;
    int start=0;
    int end=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //sorting array
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {   if(arr[i]>arr[j])
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        } 
        }
    }

    cout<<binary(arr,n,x,start,end);
}