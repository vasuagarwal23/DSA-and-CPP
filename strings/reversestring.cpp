#include<iostream>
using namespace std;
int length(char input[])
{ 
int count =0;
for(int i=0;input[i]!=0;i++)
{
   count++; 
}
return count;
}
void reversestring(char input[])
{   int len=length(input)-1;
    for (int i=0, j =len;i<j;j--,i++)
    {
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
    }
}
int main()
{char b[100];
cin.getline(b,100,'\n');
reversestring(b);
cout<<b<<endl;
}