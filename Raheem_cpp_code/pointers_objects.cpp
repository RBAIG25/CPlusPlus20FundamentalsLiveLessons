/*pointer to object and passing object as argument and returning object
    complex number
    real part
    imaginary part

    comp1 : 5 + 6i
    comp2 : 3 + 4i
    comp3= (5+3) + (6+4)i
*/
#include <iostream>
using namespace std;

class ComplexNumber{
private:
    //data members
    int real;
    float imag;

public:
    //default constructor
    ComplexNumber(){
    }
    //parameterized constructor
    ComplexNumber(int r, float i)
    {
        real = r;
        imag = i;
    }
    //member functions
    displayData()
    {
        cout << "Complex number is :" << real << " + " << imag <<"i"<<endl<<endl;
    }
    int getRealPart()
    {
        return real;
    }
    float getImagPart()
    {
        return imag;
    }
    //destructor
    ~ComplexNumber()
    {
        cout << "\nDestructor Called" << endl;
    }
};

ComplexNumber add2number(ComplexNumber n1, ComplexNumber n2){
    int r; float i;
    r = n1.getRealPart() + n2.getRealPart();
    i = n1.getImagPart() + n2.getImagPart();
    ComplexNumber temp(r,i);
    return temp;

}

int main()
{
    ComplexNumber comp1(5,4), comp2(3,6), comp3;

    comp1.displayData(); //5+4i
    comp2.displayData(); //3+6i

    cout << "Addition of comp1 and comp2" << endl;
    comp3 = add2number(comp1, comp2);
    comp3.displayData();

    cout << "pointer to object"<<endl<<endl;
    ComplexNumber * ptr1;
    ptr1 = &comp3;
    ptr1->displayData();

    ptr1 = &comp2;
    ptr1->displayData();
    cout << ptr1 <<endl; //what pointer have
    return 0;
}
