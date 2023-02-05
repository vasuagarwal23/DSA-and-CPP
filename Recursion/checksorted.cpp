#include <iostream>
using namespace std;
bool checksor(int arr[], int n)
{
    //base case
    if(n==0 || n==1)
    return true;
    //recursive relation
    if(arr[0]>arr[1])
    {
        return false;
    }
    int f=checksor(arr+1,n-1);
    return f;
    /*if(f)
    {
        return true;
    }
    else
    {
        return false;
    }*/
}
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   int ans= checksor(arr,n);
    if(ans==1)
    {
        cout<<"YES THE ARRAY IS SORTED";
    }
    else
    {
        cout<<"NO ARRAY IS NOT SORTED";
    }
}