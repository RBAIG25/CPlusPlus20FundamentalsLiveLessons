#include <iostream>
using namespace std;

//https://www.youtube.com/watch?v=JU8DbwBvOWE&list=PLIY8eNdw5tW_o8gsLqNBu8gmScCAqKm2Q&index=43

class MyBaseClass{
public:
    void show()
    {
        cout << "BaseClass 'show()'" << endl;
    }
    virtual void print()
    {
        cout << "BaseClass 'print()'" << endl;
    }
};

class MyDerivedClass : public MyBaseClass{
public:
    void show()
    {
        cout << "DerivedClass 'show()'" << endl;
    }
    void print()
    {
        cout << "DerivedClass 'print()'" << endl;
    }
};


int main()
{
    MyBaseClass * basePtr;
    MyDerivedClass derivedClassObj;

    basePtr = &derivedClassObj;

    basePtr->print(); //derivedClass print() called.
    basePtr->show();  //baseClas show() called.

    return 0;
}
