#include<iostream>
using namespace std;
class rectangle
{
public:
int length;
int breadth;
void set(int l,int b)
{
    length=l;
    breadth=b;
};
int area()
{
    return(length*breadth);
};
int peri()
{
    return 2*(length+breadth);
};

};
int main()
{
rectangle obj;
obj.set(5,6);
int a=obj.area();
int c=obj.peri();
cout<<"area of rectangle is "<<a;
cout<<endl;
cout<<"perimeter of rectangle is "<<c;
}
