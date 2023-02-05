#include<iostream>
using namespace std;
int main()
{
    
    int a[]={1 ,2, 3, 4, 5};
    int *ptr=a;//in array we don't initalize a pointer using & i.e int *ptr=&arr;
    cout<<a;
    cout<<endl;
    ptr=ptr+1;
    cout<<a;
    cout<<endl;
    cout<<ptr;
    cout<<endl;
    cout<<*ptr;
  



}