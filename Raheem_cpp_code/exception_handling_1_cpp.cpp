// exception handling in c++
#include <iostream>

using namespace std;

int main()
{
    int numerator, denominator, result;

    cout << "Enter Numerator and Denominator: \n";
    cin >> numerator >> denominator;

    try
    {
        if (denominator == 0)
        {
            throw 5;//denominator;
        }
        result = numerator / denominator; //division happens here
    }

    catch(int excep)
    {
        cout << "Exception : Divide by Zero is not allowed " << excep;
    }
    cout << "\nnumerator / denominator = " << result;

    return 0;
}
