#include <iostream>

using namespace std;

//+++++++++++++++++++++++++++++++++++++++++++
void evenOddNum()
{
    cout << "Enter a number to find Even or Odd (0:exit)\n";
    int num;
    cin >> num;

    while (num != 0)
    {
        if (num % 2)
            cout << "\nEntered Number is ODD" <<endl;
        else
            cout << "\nEntered Number is EVEN" <<endl;

        cin >> num;
    }
}
//+++++++++++++++++++++++++++++++++++++++++++
void findGreatest()
{
    cout << "Enter THREE numbers to find Greatest\n";
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    int greatest= num1;
    if (num1 < num2)
    {
        greatest = num2;
        if (num3 > num2)
            greatest = num3;
    }
    else if (num1 < num3)
        greatest = num3;

    cout << "Greatest of Three numbers is = " << greatest <<endl;
}
//+++++++++++++++++++++++++++++++++++++++++++
void swapVar()
{
    int x,y;
    cout << "Enter Two Numbers: ";
    cin >> x >> y;
    cout << "\nbefore swap\n" << "x=" << x << "; y=" <<y <<endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout << "\nafter swap\n" << "x=" << x << "; y=" <<y <<endl;
}
//+++++++++++++++++++++++++++++++++++++++++++
void findLeapYear()
{
    int x;
    cout <<"Enter The Year = ";
    cin >> x;
    if (x%4 == 0)
    {
        if (x%100 == 0)
        {
            if (x%400 == 0)
            {
                cout << "\n " << x << " is Leap Year";
            }
            else
                cout << "\n " << x << " is Not Leap Year";
        }
        else
            cout << "\n " << x << " is Leap Year";
    }

    else
        cout << "\n " << x << " is Not Leap Year";
}
//+++++++++++++++++++++++++++++++++++++++++++
void factorialOfNum()
{
    int x =1, fact=1;

    do
    {
        cout << "Enter an Integer Number (>=1) = ";
        cin >> x;
    } while (x < 1);

    cout << "\nFactorial of " << x << " is = ";
    while(x >= 1)
    {
        fact = fact * x;
        --x;
    }
    cout << fact <<endl;
}
//+++++++++++++++++++++++++++++++++++++++++++
void palindrome()
{
    int x,temp, pal=0;

    cout << "Enter an Inger to find Palindrome = ";
    cin >> x;

    temp = x;
    while (x != 0)
    {
        //cout << "\n" << pal << endl;
        pal = pal * 10;
        //cout << "\n" << pal << endl;
        pal = pal + (x%10);
        //cout << "\n" << pal << endl;
        x = x/10;
        //cout << "\n" << x << endl;
    }
    //cout << "\n" << pal << endl;
    //cout << "\n" << x << endl;
    if (temp == pal)
        cout << temp << " is Palindrome";
    else
        cout << temp << " is not Palindrome";
}
//+++++++++++++++++++++++++++++++++++++++++++
void fibonacciSeries()
{
    int fib_1=0, fib_2=1, next, count;

    cout << "Enter Series Count = ";
    cin >> count;
    count -= 1;
    cout << "Fibonacci Series is : \n";
    cout << fib_1 << ", ";
    cout << fib_2 << ", ";

    while (count != 0)
    {
        next = fib_1 + fib_2;
        fib_1 = fib_2;
        fib_2 = next;
        cout << fib_2 << ", ";
        --count;
    }
}

//+++++++++++++++++++++++++++++++++++++++++
void incrementDecrement()
{
    int x=0, y;
    y = x++;
    cout << "x = " << x <<"; " << "y = " << y <<endl; //x=1;y=0
    y = ++x;
    cout << "x = " << x <<"; " << "y = " << y <<endl; //x=2;y=2
}
//+++++++++++++++++++++++++++++++++++++++++
int main()
{
    //evenOddNum();
    //findGreatest();
    //swapVar();
    //findLeapYear();
    //factorialOfNum();
    //palindrome();
    //fibonacciSeries();
    incrementDecrement();

    return 0;
}
