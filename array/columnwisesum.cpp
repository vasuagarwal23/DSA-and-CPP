#include <iostream>
using namespace std;
int main()
{
    int a[100][100];
    int n, m;
    cout << "ENTER THE NO> OF ROWS(n)";
    cin >> n;
    cout << "ENTER THE NO> OF COLUMNS(m)";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum=0;
for(int j=0;j<m;j++)
{
for(int i=0;i<n;i++)
{
    sum=sum+a[i][j];
}
cout<<sum<<" ";
sum=0;
}
}