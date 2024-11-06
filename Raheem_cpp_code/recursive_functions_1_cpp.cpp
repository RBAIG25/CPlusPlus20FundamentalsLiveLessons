#include <iostream>
using namespace std;

int sum(int num)
{
    if (num != 0)
    {
        return (num + sum(num-1)); //sum() calls itself
    }
    else
        return num;
}

int fact(int num)
{
    if (num == 0  || num ==1)
    {
        return num;
    }
    else
        return (num * fact(num-1));
}

int fibonacci(int num)
{
    if (num <=1)
        return num;
    else
        return (fibonacci(num-1) + fibonacci (num-2));
}
int main()
{
    int num;
    cout << "Enter the number to calculate sum : \n";
    cin >> num;
    int total = sum(num);
    cout << "Sum of numbers is = " << total << endl;

    int factorial = fact(num);
    cout << "\nFactorial of "<< num << " is = " << factorial << endl;

    int i=0;
    cout << "\nFibonacci series is : \n";
    while ( i < num)
    {
        cout << " " << fibonacci(i);
        i++;
    }

    return 0;
}
