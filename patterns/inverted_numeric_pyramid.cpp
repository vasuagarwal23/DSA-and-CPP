#include <iostream>
using namespace std;
int main()
{
    int rowCount;
    int colCount;
    cin >> rowCount;
    cin >> colCount;
    for (int row = 1; row <=rowCount; row++)
    {   int i=1;
        for (int col = colCount; col > 0; col--)
        {
            cout <<i++<< " ";
        }
        colCount--;
        cout << endl;
    }
}