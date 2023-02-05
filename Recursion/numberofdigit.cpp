#include <iostream>
using namespace std;
int nod(int n)
{   
  //base case
  if(n/10==0)
  return 1;
  //recursive relation
  int small = nod(n/10);
  int big = 1 + small;
  return big;
}
int main()
{
    int count = 0;
    int n;
    cout << "enter the no.:";
    cin >> n;
    int ans=nod(n);
    cout<<ans;
}