#include<iostream>
using namespace std;
int main()
{
    int first,last;
    cin>>first;
    cin>>last;
    int sum = 0;
    if(first<=last)
    {   
        for(int i=first;i<=last;i++)
        {
            sum=sum+i;
        }
    }
    cout<<sum;
}