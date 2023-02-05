#include <iostream>
using namespace std;
int maxi(int arr[], int size)
{
    int i;
    int max = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
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
    int ans = maxi(arr, size);
    cout << ans;
}
