#include<iostream>
#include<string.h>
using namespace std;
void substring(char input[])
{   int len=strlen(input);
    for(int k=0;k<len;k++)
    {
        for(int i=k;input[i]!='\0';i++)
        {
            for(int j=k;j<=i;j++)
            {
                cout<<input[j];
            }
            cout<<endl;
        }
    }
}
int main()
{
    char b[100];
    cin.getline(b,100);
    substring(b);
}