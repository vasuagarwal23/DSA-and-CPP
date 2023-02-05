#include<iostream>
using namespace std;
int ai(int p[],int n,int x)
{
    //base case
    if(n==0)
    {
        return -1;
    }
    if (p[0] == x)
    {
        return 0;
    }
    //recursive relation
    int small=ai(p+1,n-1,x);
    if(small==-1)
    {
        return small;
    }
    else
    {
        return small+1;
    }
}
int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    int x;
    cout<<"enter element";
    cin>>x;
    int ans=ai(p,n,x);
    cout<<ans;
}