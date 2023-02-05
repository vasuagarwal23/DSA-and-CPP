#include<iostream>
using namespace std;
int main()
{
    int j = 0;
    int k = 0;
    int n;
    cin>>n;
    int arr[100];
    int arr1[100];
    int arr2[100];
    int arr3[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
      
    for(int i=0;i<n;i++)
    {   
        if(arr[i]<0)
        {
            arr1[j]=arr[i];
            j++;
        }
        else
        {
            arr2[k]=arr[i];
            k++;
        }
    }
    // cout<<j<<endl;
    // cout<<k<<endl;
    for(int i=0;i<j;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=j;i<n;i++)
    {
        arr3[i]=arr2[i];
    }
    for (int i = 0; i <j+k; i++)
    {
        cout << arr3[i]<<" ";
    }
}