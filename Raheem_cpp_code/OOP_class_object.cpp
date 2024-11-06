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
    //member functions
    void setData(string cname, string mname, string ftype, float mil, double pri){
        company_name = cname;
        model_name = mname;
        fule_type = ftype;
        mileage = mil;
        price = pri;
    }
    void displayData(){
        cout << "Car Properties:" << endl << endl; //two lines
        cout << "Car CompanyName = " << company_name << endl;
        cout << "Car ModelName = " << model_name << endl;
        cout << "Car FuelType = " << fule_type << endl;
        cout << "Car Mileage = " << mileage <<endl;
        cout << "Car Price =" << price << endl;

    }
};
int main()
{
    Cars car1; //objects are nothing but variable of type class

    car1.setData("Toyota", "Innova", "Diesel", 12, 1800000);
    car1.displayData();

    return 0;
}
