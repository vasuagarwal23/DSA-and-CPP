#include <iostream>
using namespace std;
int main()
{
    int rowCount;
    int colCount;
    cin >> rowCount;
    cin >> colCount;
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = colCount; col > 0; col--)
        {
            cout << "*"<< " ";
        }
        colCount--;
        cout << endl;
    }
}