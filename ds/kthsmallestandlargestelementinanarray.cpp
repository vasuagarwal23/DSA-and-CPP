#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
     for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int ksmall(int arr[],int n,int k)
{   int count=0;
    for (int i = 0; i < n; i++)
    {
        count++;
        if (count == k)
        {
            return arr[i];
        }
    }
    return 0;
}
int klargest(int arr[],int n,int m)
{   int count=0;
    for (int i = 0; i < n; i++)
    {
        if (count == n - m)
        {
            return arr[i];
            break;
        }
        count++;
    }
    return 0;
}
int main()
{
   int arr[100];
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int k;
   cout<<"kth element smallest";
   cin>>k;
   int m;
   cout << "kth element largest";
    cin >> m;
   sort(arr, n);
   cout<<ksmall(arr,n,k)<<endl;
//    cout<<klargest(arr,n,m);


}