#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    int k;
    int arr[100];
    int max;
    int newm[100];
    for(int i=1;i<=k;i++)
    {
        cin>>arr[i];
    }
   for(int k=1;k<n;k++)
   {
    for(int i=1;i<=k;i++)
    {   
        if(k>1)
    {
        if(arr[i]>arr[i+1])
        {
            max=arr[i];
        }
        else
        {
            max=arr[i+1];
        }
    }
    else
    {
        max=arr[i];
    }
        newm[i] = max + arr[i];
    }
    }
   for(int i=1;i<=n;i++)
   {
    cout<<newm[i]<<" ";
   }
   }

