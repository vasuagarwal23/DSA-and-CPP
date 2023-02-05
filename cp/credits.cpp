#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cout << "ENTER NO> OF TEST CASES";
    cin >> n;
    int w;
    for(int i=1;i<=n;i++)
    {
        // test case starts
        int X;
        cout << "ENTER NO. OF RTP COURSES";
        cin >> X;
        cout << endl;
        int Y;
        cout << "ENTER NO. OF audit COURSES";
        cin >> Y;
        int Z;
        cout << "ENTER NO. non-rtp COURSES";
        cin >> Z;
        w = (4 * X) + (2 * Y);
        cout << w << endl;
    }
}
