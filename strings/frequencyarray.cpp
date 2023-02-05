#include<iostream>
using namespace std;
int main()
{
    int freq[256]={0};
    char a[100];
    char b[100];
    cin>>a;
    cin>>b;
    for(int i=0;a[i]!='\0';i++)
    {
        int index=a[i];
        freq[index]++;
    }
    for (int i = 0; b[i] != '\0'; i++)
    {
        int index = b[i];
        freq[index]--;
    }
    int count=0;
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
    
}