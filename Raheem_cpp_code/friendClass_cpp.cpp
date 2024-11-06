// friend class
#include <iostream>
using namespace std;

class myClass1{
    friend class myClass2; //myClass2 is friend of myClass1.
private:
    int x;
public:
    myClass1(int a)
    {
        x =a;
    }

};

class myClass2{
public:
    void showData(myClass1 obj)
    {
        cout << "x value is: " << obj.x <<endl;
    }
};
int main()
{
    myClass1 obj1(5);
    myClass2 obj2;
    obj2.showData(obj1);

    return 0;
}
