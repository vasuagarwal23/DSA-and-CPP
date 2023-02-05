#include<iostream>
using namespace std;
class sorting
{
public:
void sort(int a[],int n)
{
    // code here
    int lo = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        switch (a[mid])
        {
        // if element=0
        case 0:
            swap(a[lo++], a[mid++]);
            break;
        // if element =1
        case 1:
            mid++;
            break;
        // if element=2
        case 2:
            swap(a[mid], a[high--]);
            break;
        }
    }
}
};
int main()
{   int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
    cin>> arr[i];
    }
    sorting obj;
    obj.sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}