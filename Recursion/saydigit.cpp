#include<iostream>
using namespace std;
void sd(int n,string array[])
{
    if(n==0)
    {
        return ;
    }
    //processing
    int x=n%10;
    n=n/10;
    //recursive relation
    sd(n,array);
    cout<<" "<<array[x];


}
int main()
{
    int n;
    cin>>n;
    string array[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sd(n,array);
}