#include <iostream>
using namespace std;
int cot(int n)
{ // base case
    if (n == 0)
        return 0;
 //recursive relation
    if (n%10 == 0)
    {
        return 1 + cot(n / 10);
    }
    else
    {
        return  cot(n / 10);
    }
}

int main()
{
    int n;
    cin >> n;
    int ans = cot(n);
    cout << ans;
}
