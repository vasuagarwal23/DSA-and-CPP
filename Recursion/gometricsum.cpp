#include<iostream>
#include<cmath>
using namespace std;
double gometricsum(int k)
{   //basecase
    if(k==0)
    {
        return 1;
    }
    //recursive relation
    return 1/pow(2,k)+gometricsum(k-1);

}
int main()
{
    int k;
    cin>>k;
   double ans= gometricsum(k);
   cout<<ans;
}