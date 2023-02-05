 #include<iostream>
 using namespace std;
 int main()
 {
    int a[100][100];
    int n,m;
    cout<<"ENTER THE NO> OF ROWS(n)";
    cin>>n;
    cout << "ENTER THE NO> OF COLUMNS(m)";
    cin>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    // row wise
    cout<<"ROW WISE";
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    // column wise
    cout<<"COLUMN WISE";
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
 }