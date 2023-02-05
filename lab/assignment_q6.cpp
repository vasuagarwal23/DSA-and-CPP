#include<iostream>
using namespace std;
void reverse(int arr[],int size)
{
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{   int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,size);


}