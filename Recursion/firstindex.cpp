#include <iostream>
using namespace std;
int check(int arr[], int n, int x)
{
    // base case
    if (n==0)
        return -1;
    // recursive relation
    if(arr[0]==x)
    {
        return 0;
    }
    int small = check(arr+1, n - 1, x);
    if(small==-1)
    {
     return small;
    }
     else
     {
        return small+1;
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