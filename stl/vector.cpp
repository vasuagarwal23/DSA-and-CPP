#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;  //vector initialization without defining size.
    vector<int> a(5, 1); //vector initialization with size and element.
    vector<int> last(a); //copy of a vector into last.
    for (int i : last)  //loop to print all the elements of the vector.
    {
        cout << i;
    }
    // vector<int> v(a);//copy of a in v vector.
    cout << endl;
    cout << v.capacity() << endl;//capacity function tells about the total memory allocated.
    v.push_back(1);
    cout << v.capacity() << endl;
    v.push_back(2);
    cout << v.capacity() << endl;
    v.push_back(3);
    cout << v.capacity() << endl;
    cout << v.size() << endl;//size function tells about no. of elements in a vector.
    cout << v.front() << endl;//use to print first element of a vector.
    cout << v.back() << endl; // use to print last element of a vector.

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i;
    }
    cout << endl;
    cout << "after pop" << endl;
    v.pop_back();//pop function used to pop out last element of a vector.
    for (int i : v)
    {
        cout << i;
    }
    cout << v.size() << endl;
    v.clear();//used to clear vector will only clear vector elements no vector memory.
    cout << v.size() << endl;
    cout << v.capacity();
}
