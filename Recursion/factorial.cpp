#include<iostream>
using namespace std;
int factorial(int n)
{
    //base case
    if(n==0)
    return 1;
    //recursive relation

    return n*factorial(n-1);
}
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int ans=factorial(n);
    cout<<"factorial of "<<n<<" is :"<<ans;

}