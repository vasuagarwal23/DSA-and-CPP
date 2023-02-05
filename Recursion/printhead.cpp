#include<iostream>
using namespace std;
void print(int n)
{
    //base case
    if(n==0)
    return ;
    //recursive relation
    print(n-1);
    cout<<n;

}
int main()
{
    int n;
    cout<<"enter the no.:";
    cin>>n;
    print(n);
}

