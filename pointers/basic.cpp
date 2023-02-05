#include<iostream>
using namespace std;
int main()
{
    // int i=10;
    // int *p= &i;
    //  cout<<p<<endl;
    //  cout<<sizeof(p)<<endl; // ---*********--- size of pointer--> 8
    //  cout<<*p<<endl;
    // // *******************************
    // cout<<i<<endl;
    // cout<<*p<<endl;
    // i++;
    // cout<<i<<endl;
    // cout<<*p<<endl;
    // // *******************************
    // int a=*p; //---*****--- or a=i means same can also do (*p)++
    // cout<<a<<endl;
    // // *******************************
    // i = 12; //---*****---  both means same
    // *p=23;
    // // *******************************
    // int *q=p;
    // cout<<q;
    // int a=100,b=200;
    // int *p=&a,*q=&b;
    // cout<<p<<endl;
    // cout<<q<<endl;
    // p=q;
    // cout<<p<<endl;
    // cout<<q<<endl;
    // cout<<*p<<endl;
    // int a[10];
    // a[0]=1;
    // a[3]=2;
    // a[2]=3;
    // cout<<&a[0]<<endl;
    // cout << &a[2] << endl;
    // cout<<&a[3]<<endl;
    // int *p=&a[0];
    // cout<<*p<<endl;
    // p=a+3;
    // cout<<*p<<endl;
    // int a[6] = {1, 2, 3};
    // int *b =a;
    // cout << b[2];
    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout << ptr << endl;
    // int a = 10;
    // int *p = &a;
    // int **q = &p;
    // int b = 20;
    // *q = &b;
    // (*p)++;
    // cout << a << " " << b << endl;
    int a = 100;
    int *p = &a;
    int **q = &p;
    int b = (**q)++;
    int *r = *q;
    (*r)++;
    cout << a << " " << b << endl;
}