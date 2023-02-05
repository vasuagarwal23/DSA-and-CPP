#include<iostream>
using namespace std;

// void increment(int &n)
// {
//     n++;
// }
int main()
{
    //............... adress typecasting............
/* int i=65;
 char c=i;
 cout<<c;
 this is an example of an implicit typecasting.*/


 int i=65;
 int *p=&i;
 char *pc=(char*)p;
 cout<<*p<<endl;
 cout<<*pc<<endl;
//  cout<<pc<<endl;
//  cout<<p<<endl;
// // This is an exmaple of explicit typecasting in pointers.
//  when *pc will excecute according to our concept at *pc output should be nothing same for *(pc+1),*(pc+2) and at *(pc+3)we thought it should print A,but it print A at *(pc) because it count on the basis of little endian system...  */
// in our system integer is stored from lower significant bit to larger...


// char a='A';
// char *p=&a;
// int *c=(int *)p;
// cout<<*p<<endl;
// cout<<c<<endl;
// cout<<*(c+3)<<endl;

// char a = 'A';
// char *p=&a;
// int *pc=(int *)p;
// cout<<*p<<endl;
// cout<<*(pc)<<endl;
// cout << *(pc+1) << endl;
// cout << *(pc+2) << endl;
// cout << *(pc+3) << endl;
// cout<<p<<endl;
// cout<<pc<<endl;


// .....................reference and pass by reference............................
//     int i = 10;
    
// increment(i);
// cout<<i<<endl;
//         int &j = i;
//     i++;
//     cout << j << endl;
//     int k = 50;
//     j = k;
//     cout << i << endl;

//........................ Dynamic memory allocation(IN HEAP).................................
// int *p=new int;
// cout << *p << endl;
// *p=10;
// cout<<*p<<endl;


//.......................making an array(in heap)......................
// int n;
// cin>>n;
// int *pa=new int[n];
// for(int i=0;i<n;i++)
// {
//     cin>>pa[i];
// }
// for (int i = 0; i < n; i++)
// {
//     cout<<pa[i];
// }
//......................2D array in heap.................................
// int n,m;
// cin>>n;
// cin>>m;
// int **p=new int *[n];
// for(int i=0;i<m;i++)
// {
//     p[i]=new int[n];
// }
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         cin>> p[i][j];
//     }
// }
// for (int i = 0; i < m; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         cout<< p[i][j]<<" ";
//     }
//     cout<<endl;
// }
// for(int i=0;i<m;i++)
// {
//     delete []p[i];//....deletion of memory in 2d array  (pehele anadar wala saaf hoga then bahar wala).....
// }
// delete []p;//........deletion of memory in 2d array(bahar wali).........


// .................constant variable..........................

// int i=10;
// const int &k=i;
// i++;
// k++;.......(this willl give error as path is constant accroding to code i only give readable accesibilty to k so we can't do k++)........>
// cout<<k;



// ......
// int const i=10;
// int const&k=i;
// i++;.....(can do k++ and i++ as both the path are constant).....
// k++;
// cout<<k;
// cout<<i;



}