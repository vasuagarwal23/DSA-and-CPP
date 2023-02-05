#include <iostream>
#include <iostream>

using namespace std;
int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reversestring(char input[])
{
    int len = length(input) - 1;
    for (int i = 0, j = len; i < j; j--, i++)
    {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}
void reversewordwise(char input[])
{
    reversestring(input);
    int len = 0;
    int count = 0;
    int k = 0, c;
    int t = length(input);
    // cout<<t<<endl;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] != ' ' && i < t)
        {
            count++;
            // cout<<input[i]<<" "<<count<<endl;
        }
        if (i == t - 1 || input[i] == ' ')
        {
            for (k = len, c = len + count - 1; k < c; c--, k++)
            {
                char temp = input[k];
                input[k] = input[c];
                input[c] = temp;
            }
            len = i + 1;
            count = 0;
        }
    }
}
int main()
{
    char b[100];
    cin.getline(b, 100);
    reversewordwise(b);
    cout << b;
}