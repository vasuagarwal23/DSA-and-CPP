#include <iostream>
using namespace std;
int main()
{
    int freq[256] = {0};
    char a[100];
    char b[100];
    cin >> a;
    int index=0;
    for(int i=0;a[i]!='\0';i++)
    {
        freq[a[i]]++;
    }
    int max=-1;
    char result;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if(max<freq[a[i]])
        {
            max=freq[a[i]];
            result=a[i];
            
        }
 
    }
    cout << result;
}