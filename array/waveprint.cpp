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
for(int j=0;j<m;j++)
{
    if(j%2==0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i][j];
        }
    }
    else
    {
        for(int i=n-1;i>=0;i--)
        {
            cout<<a[i][j];
        }
    }
}
}
