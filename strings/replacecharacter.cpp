#include <iostream>
using namespace std;
int main()
{
    char b[100];
    cin >> b;
    cout << b << endl;
    char c1 = 'a';
    char c2 = 'x';
    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == c1)
        {
            b[i] = c2;
        }
    }
    cout << b;
}
