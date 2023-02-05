#include <iostream>
using namespace std;
void print(int n)
{
    // base case
    if (n == 0)
        return ;
    // recursive relation
    cout << n;
    print(n - 1);
    
}
int main()
{
    int n;
    cout << "enter the no.:";
    cin >> n;
    print(n);
}
