#include <iostream>
using namespace std;
//base class-1
class A{
public:
    void printMessage()
    {
        cout << "Class A print message function" << endl;
    }
};
//base class-2
class B{
public:
    void printMessage()
    {
        cout << "Class B print message function" << endl;
    }
};
//derived class
class AB: public A, public B{

    //printMessage() -> Class A
    //printMessage() -> Class B
    //error: request for member 'printMessage' is ambiguous|
public:
    void printMessage()
    {
        A::printMessage();
        B::printMessage();
        cout << "Class AB print message" <<endl;
    }
/*public:
    void printMessage()
    {
        cout << "Class AB print message function" << endl;
    }*/
};
int main(){
    AB obj;
    obj.printMessage();
    return 0;}
