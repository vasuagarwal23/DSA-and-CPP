#include <iostream>
using namespace std;
int main()
{
    char a[]="abc";
    char *c=&a[1];
     cout<<c<<endl; /*(fault is in cout)...It will print the whole contet of character array a ,basically it will print character array from the address we have provided as in this if we gave a[0] we will get output as abc,while we give a[1] we are getting bc*/
     cout<<*c<<endl; /*It will print the first element of character array a*/
    char b='a';
    char *pc=&b;
    cout<<b<<endl;
    cout<<pc<<endl; /*it will print till it will not find null character*/
    cout << *pc << endl; /*It will print the first element of character array b*/
}