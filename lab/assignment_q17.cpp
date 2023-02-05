#include <iostream>
using namespace std;
int  linearsearch(int arr[],int size,int x)
{
    for (int i = 0; i < size; i++)
    {
        if (x == arr[i])
        {
            return 1;
        }
    }
    return 0;
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
    int x;
    cout << "Enter the element you want to search";
    cin >> x;
    int ans=linearsearch(arr,size,x);
    if(ans==1)
    {
        cout<<"element is present in an array";
    }
    else
    {
        cout << "element is not present in an array";
    }
    
}
