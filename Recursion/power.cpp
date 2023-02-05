#include<iostream>
using namespace std;
int power(int x,int n)
{
    //base case
    if(n==0)
    return 1;
    //recursive relation

    /* int chotti=power(x,n-1);
    int badi=x*chotti;
     return badi;*/

    //more optimise code
    return x*power(x,n-1);
}
int main()
{
    int n;
    int x;
    cout<<"enter the value of x :";
    cin>>x;
    cout << "enter the value of n :";
    cin>>n;
    int ans=power(x,n);
    cout<<ans;

}