#include <iostream>
using namespace std;
int main()
{
    char a[100];
    cin >> a;
    int len[100];
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[i+1])
        {
            len[i]++;
        }
    }
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != ' ')
        {
            a[count] = a[i];
            count++;
        }
    }
    a[count] = '\0';
}
