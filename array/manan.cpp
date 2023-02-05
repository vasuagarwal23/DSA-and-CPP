#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter length of Array";
    cin >> n;
    int m;
    cout<<"enter the increased length of array(m>n)";
    cin>>m;

    int *p;
    p=new int[n];
    for(int i=0;i<n;)
    {
        cin>>p[i];
    }
    cout<<"the array is";
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
}