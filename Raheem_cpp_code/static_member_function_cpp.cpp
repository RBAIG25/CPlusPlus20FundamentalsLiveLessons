#include <iostream>
using namespace std;

class MyClass{
private:
    int x;
    static int count;
public:
    //default constuctor
    MyClass()
    {
        count++;
    }
    static int getCount()
    {
        return count;
    }
};

//initialization always outside the class
int MyClass::count=0;

int main()
{
    cout << "Initial Count: " << MyClass::getCount() << endl;
    MyClass obj1, obj2; //default constructor is called
    cout << "Count after 2 objects: " << MyClass::getCount() <<endl;

    return 0;
}
