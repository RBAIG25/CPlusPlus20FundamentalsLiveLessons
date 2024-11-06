//Classes & Objects
#include <iostream>
#include <string>
using namespace std;

class Cars{
private:
    //member variables or data member
    string company_name;
    string model_name;
    string fule_type;
    float mileage;
    double price;

public:
    //default constructor
    Cars(){
        cout << "Default Constructor Called" << endl;
        company_name = "TOYOTA";

    }

    //parameterized constructor
    Cars(string cname, string mname, string ftype, float mil, double pri)
    {
        cout << "\nParameterized Constructor Called" << endl;
        company_name = cname;
        model_name = mname;
        fule_type = ftype;
        mileage = mil;
        price = pri;
    }

    //copy constructor
    Cars(Cars &obj)
    {
        cout << "\nCopy Constructor Called" << endl;
        company_name = obj.company_name;
        model_name = obj.model_name;
        fule_type = obj.fule_type;
        mileage = obj.mileage;
        price = obj.price;
    }

    //member functions
    void setData(string cname, string mname, string ftype, float mil, double pri){
        company_name = cname;
        model_name = mname;
        fule_type = ftype;
        mileage = mil;
        price = pri;
    }
    void displayData(){
        cout << "\nCar Properties:" << endl << endl; //two lines
        cout << "Car CompanyName = " << company_name << endl;
        cout << "Car ModelName = " << model_name << endl;
        cout << "Car FuelType = " << fule_type << endl;
        cout << "Car Mileage = " << mileage <<endl;
        cout << "Car Price =" << price << endl;

    }

    //destructor
    ~Cars()
    {
        cout << "\nDestructor Called" << endl;
    }
};
int main()
{
    Cars car1, car2("Toyota", "Fortuner", "Diesel", 11, 3000000); //objects are nothing but variable of type class

    car1.setData("ToYoTa", "Innova", "Diesel", 12, 1800000);
    car1.displayData();
    car2.displayData();
    Cars car3=car1;  //copy constructor is called
    car3.displayData();
    return 0;
}
