#include <iostream>

using namespace std;
char prefixes(char input[])
{
    for (int i = 0; input[i] != '\0'; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << input[j];
        }
        cout << endl;
    }
}
int main()
{
    char b[100];
    cin.getline(b, 100);
    cout << prefixes(b);
}
