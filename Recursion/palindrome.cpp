 #include<iostream>
#include <cstring>
using namespace std;
bool checkPalindrome(char input[])
{
    // Write your code here
    static int i = 0;
    int l = strlen(input);
    int j=l-1;
    //base case(if there is only on character)
    if (i == l)
    {
        return true;
    }
    //recursive relation
    if (input[i] != input[j])
    {
        return false;
    }
    else
    {
        i++;
        j--;
        checkPalindrome(input);
    }
    return true;
    
 }
 int main()
 {
     char input[50];
     cin >> input;

     if (checkPalindrome(input))
     {
         cout << "true" << endl;
     }
     else
     {
         cout << "false" << endl;
     }
 }
