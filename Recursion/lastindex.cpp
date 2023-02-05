#include <iostream>
using namespace std;
int check(int arr[], int n, int x)
{
    // base case
    if (n==0)
        return -1;
    // recursive relation
    int small = check(arr+1, n - 1, x);
    return small+1;
    if (arr[0] == x)
    {
        return 0;
    }
    else
    {
        return -1;
    }
     
}
int main()
{
    int arr[100];
    int n;
    cout << "enter size of array :";
    cin >> n;
    int x;
    cout << "enter element :";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = check(arr, n, x);
    cout<<ans;
}