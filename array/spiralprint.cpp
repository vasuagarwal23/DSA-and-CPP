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
    int x=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int startrow=0,startcol=0,endrow=n-1,endcol=m-1;
    while(startrow<=endrow&&startcol<=endcol)
    {
        for(int j=startrow;j<=endcol;j++)
        {
            cout<<a[startrow][j]<<" ";
        }
        startrow++;
        if(startrow<endrow)
        {
            for (int j = startrow; j <= endrow; j++)
            {
                cout << a[j][endcol] << " ";
            }
            endcol--;
        
            for(int j=endcol;j>=startcol;j--)
            {
               cout<<a[endrow][j]<<" ";
            }
            endrow--;
            startcol++;
            for (int j = endrow; j >= startrow; j--)
            {
                cout << a[j][startrow - 1] << " ";
            }
        }
    }
}
