#include <iostream>
using namespace std;
void sorted(int arr[], int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return;
    }
    // recursive relation
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    sorted(arr, n - 1);
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
    sorted(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}