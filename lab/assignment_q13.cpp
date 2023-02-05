#include<iostream>
using namespace std;
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
    for(int i=0;i<size;i++)
    {
        if(x==arr[i])
        {
           cout<<"element is present in an array";
           return 0;
        }
    }
    cout << "elemnt is not present in an array";
}
