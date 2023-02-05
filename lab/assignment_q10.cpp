#include<iostream>
using namespace std;
int main()
{   int n,x;
    cout<<"No. of elements in first array";
    cin>>n;
    cout << "No. of elements in second array";
    cin>>x;
    int arr1[100];
    int arr2[100];
    int arr3[200];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < x; i++)
    {
        cin >> arr2[i];
    }
    for(int i=0;i<n;i++)
    {
        arr3[i]=arr1[i];
    }
    int j=0;
    for(int i=n;i<n+x;i++)
    {   
        arr3[i]=arr2[j];
        j++;
    }
    for (int i = 0; i < n+x; i++)
    {
        cout<<arr3[i]<<" ";
    }
}
