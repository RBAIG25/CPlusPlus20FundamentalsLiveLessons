#include <iostream>
using namespace std;

/*int add(int x, int y)
{
    return (x+y);

}
float add(float x, float y)
{
    return (x+y);

}
double add(double x, double y)
{
    return (x+y);

}*/

template <typename T, typename U>
U add(T x, U y)
{
    return (x+y);
}


int main()
{

    cout << "addition of two numbers is = " << add<int, double>(2,3.2) <<endl;
    //cout << "addition of two float is = " << add<float>(2.5f,3.7f) <<endl;
    //cout << "addition of two double is = " << add<float>(2.25,3.65) <<endl;
    return 0;
}
