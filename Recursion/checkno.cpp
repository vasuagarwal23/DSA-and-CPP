#include<iostream>
using namespace std;
bool check(int arr[],int n,int x)
{
    //base case
    if(n<0)
    return false;
    //recursive relation
    if(arr[0]==x)
    {
        return true;
    }
    bool small=check(arr+1,n-1,x);
    if(small)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int arr[100];
    int n;
    cout<<"enter size of array :";
    cin>>n;
    int x;
    cout << "enter element :";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   int ans= check(arr,n,x);
   if(ans==1)
   {
    cout<<"ELEMENT IS PRESENT IN AN ARRAY";
   }
   else
   {
    cout<<"ELEMENT IS NOT PRESENT IN AN ARRAY";
   }

}