#include<iostream>
using namespace std;
int main()
{
    int rowCount,colCount;
    cin>>rowCount>>colCount;
    for(int row=0;row<rowCount;row=row+1)
    {   //for spaces
        for(int col=0;col<colCount-row-1;col++)
        {
            cout<<" ";
        }
        //for *
        for(int col1=0;col1<row+1;col1++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}