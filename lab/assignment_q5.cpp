#include<iostream>
using namespace std;
int main()
{
    for(int i= 1;i<=9;i++)
    {
        switch(i)
        {
            case 1:
            cout<<"one";
            break;
            case 2:
            cout << "Two";
            break;
            case 3:
            cout << "THree";
            break;
            case 4:
            cout << "Four";
            break;
            case 5:
            cout << "Five";
            break;
            case 6:
            cout << "Six";
            break;
            case 7:
            cout << "Seven";
            break;
            case 8:
            cout << "Eight";
            break;
            case 9:
            cout << "Nine";
            break;
            default:
            cout<<"NOT IN RANGE"<<endl;
        }
        cout<<endl;
    }
}