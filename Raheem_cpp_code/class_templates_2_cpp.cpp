#include <iostream>
using namespace std;

template <typename T, typename U>

class Weight{
private:
    T kg;
    U grams;
public:
    void setData(T x, U y)
    {
        kg = x;
        grams = y;

    }
    T getKgData()
    {
        return kg;
    }
    U getGramData()
    {
        return grams;
    }
};

int main()
{
    Weight <int, double> obj1;
    obj1.setData(5, 0.53);
    cout << "Weight in Kg is = " << obj1.getKgData() << endl;
    cout << "Weight in grams is = " << obj1.getGramData() << endl;

    //Weight <double> obj2;
    //obj2.setData(5.3452);
    //cout << "Weight is = " << obj2.getData() << endl;
    return 0;
}
