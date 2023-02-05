#include<iostream>
using namespace std;
int first(int arr[],int n,int x,int start,int end)
{   int mid=start+((end-start)/2);
    int ans;
    //basecase
    if(start<=end)
    {
        return -1;
    }
    //recursive relation
    if(arr[mid]==x)
    {   ans=mid;
        end=mid-1;
    }
    else if(arr[mid]>x)
    {
        end=mid-1;
    }
    else if(arr[mid]<x)
    {
        start=mid+1;
    }
    return first(arr,)
}