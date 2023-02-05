#include<iostream>
using namespace std;
int main()
{
    int count;
    int arr[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {   for(int j=i+1;j<n;j++)
    {
        if (arr[i]==arr[j])
        {
            arr[j]=arr[j+1];    
        }
    }    
    }
    for(int i=0;i<n-count;i++)
    {
        cout<<arr[i];
    }
}