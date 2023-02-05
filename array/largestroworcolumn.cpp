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
    int sumrow[100];
    // row wise sum
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<m;j++)
        {
            sumrow[i]=sumrow[i]+a[i][j];
        }
         cout<<"row"<<" "<<i+1<<" "<<"sum"<<sumrow[i]<<endl;
    }
    // column wise sum
    int sumcol[100];
    for(int j=0;j<m;j++)
    {   
        for(int i=0;i<n;i++)
        {
            sumcol[j]=sumcol[j]+a[i][j];
        }
        cout << "column"<< " " << j+1<< " "<< "sum"<<sumcol[j] << endl;
    }
    // row max
    int maxindex=0;
    int maxrow=0;
    int c;
    int d;
    maxrow = sumrow[0];
    for(int i=0;i<n;i++)
    {   
         
        if(maxrow<sumrow[i+1])
        {
            maxindex = i + 1;
            maxrow=sumrow[i+1];
        }
    }
         c=maxrow;
         d=maxindex+1;


    // column max
    int maxcolindex=0;
      int maxcol=0;
      int x;
      int y;
      maxcol = sumcol[0];
      for (int i = 0; i < m; i++)
      {

          if (maxcol < sumcol[i + 1])
          {
              maxcolindex = i + 1;
              maxcol = sumcol[i + 1];
          }
          x = maxcol;
          y = maxcolindex + 1;
    }
    if(c>x)
    {
        cout<<"MAX ROW"<<c<<" "<<d<<endl;
    }
    else if (x>c)
    {
        cout<<"MAX COL"<<x<<" "<<y<<endl;
    }

}