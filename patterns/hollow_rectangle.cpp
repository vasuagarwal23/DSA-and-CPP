#include<iostream>
using namespace std;
int main()
{
    int rowCount,colCount;
    cin>>rowCount;
    cin>>colCount;
    for(int row=0;row<rowCount;row=row+1)
    {
        if(row==0||row==rowCount-1)
        {
            for(int col=0;col<colCount;col=col+1)
            {
                cout<<"*"<<" ";
            }
        }
        else
        {
            cout<<"*"<<" ";
            for(int col=0;col<colCount-2;col=col+1)
            {
                cout<<" "<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}