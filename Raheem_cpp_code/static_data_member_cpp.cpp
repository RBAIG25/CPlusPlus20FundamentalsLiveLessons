#include <iostream>
using namespace std;

class MyClass{
public:
    int x;
    static int count;

    //default constuctor
    MyClass()
    {
        count++;
    }
};

//intialization
int MyClass::count=0;

int main()
{
    cout << "Initial Count: " << MyClass::count << endl;
    MyClass obj1, obj2; //default constructor is called
    cout << "Count after 2 objects: " << MyClass::count <<endl;

    return 0;
}
