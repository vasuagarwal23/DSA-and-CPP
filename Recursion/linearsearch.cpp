#include<iostream>
using namespace std;
bool check(int arr[],int n,int x)
{   //base case
    if(n==0)
    {
        return false;
    }
    //recursive relation
    if(arr[0]==x)
    {
        return true;
    }
    else
    {
        return check(arr+1,n-1,x);
    }

}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<check(arr,n,x);
}
