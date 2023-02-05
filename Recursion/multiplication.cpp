#include <iostream>
using namespace std;
int mul(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }
    return m + mul(m, n - 1);
}
int main()
{
    int n, m;
    cin >> m >> n;
    int ans = mul(m, n);
    cout << ans;
}