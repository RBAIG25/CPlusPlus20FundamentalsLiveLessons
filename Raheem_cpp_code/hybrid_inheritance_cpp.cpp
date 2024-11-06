#include <iostream>
using namespace std;
class base{
protected:
    int val;
};
class derived1 : public base{
public:
    derived1()
    {
        val = 1;
    }
    void getValue()
    {
        cout <<"Derived-1 value of data member is: " <<val <<endl;
    }
};
class derived2 : public base{
public:
    derived2()
    {
        val = 2;
    }
    void getValue()
    {
        cout <<"Derived-2 value of data member is: " <<val <<endl;
    }
};
class derived3 : public derived1, public derived2{

    //2 copies of val in derived3
public:
    void getValue()
    {
        //count << "Int value is: " <<val;
        derived1::getValue();
        derived2::getValue();
    }
};
int main(){
    derived3 obj;
    obj.getValue();
    return 0;
}
