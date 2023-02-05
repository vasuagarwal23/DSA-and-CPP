#include <iostream>
using namespace std;
int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != 0; i++)
    {
        count++;
    }
    return count;
}
bool checkPalindrome(char str[])
{
    int i = 0;
    int j = length(str) - 1;
    while (j >i)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
        
    }
  return true;  
}
 int main()
{
    char b[100];
    char c[100];
    cin >> b;
    cout << b << endl;
    cout<< checkPalindrome(b);
}