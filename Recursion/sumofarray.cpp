#include <iostream>
using namespace std;
int sum(int arr[], int n)
{
    // basecase
    if (n == 0)
    {
        return 0;
    }
     if (n == 1)
     {
         return arr[0];
     }
    // recursive relation 
    int small = sum(arr + 1, n - 1)+sum(arr+1,n-1); // doubt in call stack if small is sum(arr + 1, n - 1)+sum(arr + 1, n - 1);
    int big = arr[0] +small;
    return big;
}
int main()
{
    int arr[100];
    int n;
   cin>>n; 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sum(arr, n);
}