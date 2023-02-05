#include<iostream>
using namespace std;
// class hero
// {   
 //if we have not initialise any variable in class then size of class is 1,only for indentification purpose compiler gave 1 byte memory.

// };
// int main()
// {
//     hero h1;
// }
class hero
{
    
int health;
char level;
public:
// (when we initilaise this than inbuilt constructor/default constructor gets removed)
    hero()
    {
        cout<<"constructor called";
    }
//parametrized constructor
hero(int health,char level)
{   this->level=level;
    this->health=health;
}
// void sethealth(int h)
// {
//     health=h;
// }
// int gethealth()
// {
//     return health;
// }
// char getlevel()
// { 
//     cout<<level;
// }
// hero(hero& temp)
// {
//     this->health=temp.health;
//     this->level = temp.level;
// }
void print()
{
    cout<<level<<endl;
    cout<<health<<endl;
}
};
int main()
{
// hero h1;
//     h1.sethealth(70);
//     cout<<h1.gethealth(); 
// hero *b=new hero; //dynamic allocation.
// b->sethealth(10);   //or (*b).sethealth(10);
// cout<<b->gethealth();
//  hero h1; 
//  cout<<"vasu";
// hero h1(10);
// cout<<h1.gethealth();
// hero w;
hero w; 
hero s(70,'c');
s.print();
//copy constructor
// hero r(s);
//  hero r=s;(both are copy constructor)
cout<<endl;
r.print();



}
//this (a place where address of current obj is saved)
