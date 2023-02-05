#include <iostream>
using namespace std;
bool sorted(int arr[], int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return true;
    }
    // recursive relation
    int i = 0;
    if (arr[i] > arr[i + 1])
    {
        return false;
    }
    else
    {
        i++;
        sorted(arr, n - 1);
    }
    return true;
}
int main()
{
    int arr[100];
    int n;
    n = 5;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sorted(arr, n);
}