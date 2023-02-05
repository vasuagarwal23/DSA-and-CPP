#include<iostream>
using namespace std;
int prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
       
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(prime(n))
    {
        cout<<"the no. prime";
    }
    else
    {
        cout<<"the no. is not prime";
    }
    
}
