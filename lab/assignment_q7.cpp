#include<iostream>
using namespace std;
int maxindex(int arr[],int size)
{   int i;
    int max=arr[0];
    int index;
    for(i=1;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
    }
    return index;
}
int main()
{
    int arr[100];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ans=maxindex(arr,size);
    cout<<ans;


}
