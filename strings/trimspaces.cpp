#include<iostream>
using namespace std;
int main()
{
    char b[100];;
    cin.getline(b,100);
    int count =0;
    for(int i=0;b[i]!='\0';i++)
    {
        if(b[i]!=' ')
        {
            b[count]=b[i];
            count++;
        }
    }
    b[count]='\0'; 
   
cout<<b;
}