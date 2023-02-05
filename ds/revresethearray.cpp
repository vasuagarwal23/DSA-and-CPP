#include<iostream>
#include<array>
using namespace std;
void reverse(int arr[],int n,int index)
{
    for (int i = index + 1; i < n; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1];
        arr[n - 1] = temp;
        n--;
    }
}
int main()
{   
    int arr[100];
    int n;
    int index;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>index;
    reverse(arr,n,index);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}