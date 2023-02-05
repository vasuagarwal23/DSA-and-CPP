#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin>>n;
    int z;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            z=arr[i];
            break;
        }
        else
        {
            z=arr[0];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=z)
        {
            count++;
        }
    }
    cout << count; 
}
