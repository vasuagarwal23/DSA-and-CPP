#include<iostream>
using namespace std;
int nw(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return nw(n-1)+nw(n-2);
}
int main()
{
    int n;
    cin>>n;
    int ans= nw(n);
    cout<<ans;
}