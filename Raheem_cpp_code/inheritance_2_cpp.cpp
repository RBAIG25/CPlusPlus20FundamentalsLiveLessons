#include <iostream>
using namespace std;

class MyBaseClass{
public:
    int x;
    MyBaseClass()
    {
        x=5;
        y=5;
        z=5;
    }
    void printProtectedData()
    {
        cout << "y = " << y << endl;
    }
    void printPrivateData()
    {
        cout << "z = " << z << endl;
    }
protected:
    int y;
private:
    int z;
};

class MyDerivedClass : public MyBaseClass{

};

void myOutsideFunction(MyBaseClass obj)
{
    //cout << "x = " << obj.x << endl; //his works as 'x' is in public
    //cout << "y = " << obj.y << endl; //does not work = 'y' is in protected
    obj.printProtectedData();          //this works as its called by member fn.
    //cout << "z = " << obj.z << endl; //does not work = 'z' is in private
    obj.printPrivateData();            //this works as its called by member fn.
}

int main()
{
    MyBaseClass obj1;
    MyDerivedClass obj2;
    cout << "x = " << obj2.x << endl;
    myOutsideFunction(obj1);

    return 0;
}
