#include<iostream>
using namespace std;
int main()
{
   int firstnum,secondnum,hcf;
   cin >> firstnum >> secondnum; // taking a>b
   for (int i = 1; i <= secondnum; i++)
   {
       if (firstnum % i == 0 && secondnum % i == 0)
       {
           hcf = i;
    }
    
   }
   cout << "The GCD of " << firstnum << " and " << secondnum << " is " << hcf;
   return 0;
}