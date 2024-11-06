#include <iostream>

using namespace std;

void Print(int count, char ch)
{
    for (int i=0; i<count; ++i)
    {
        cout << ch;
    }
    cout << endl;
}

void EndMessage()
{
    cout << "End of Program" <<endl;
}
int main ()
{
    atexit(EndMessage); //anywhere you keep this line,
                        //output will be at end program
    Print(5, '#');
    void (* fnPtr)(int, char) = &Print; //"Print" works same
    (*fnPtr)(8, '@');
    fnPtr(4, '%');
    cout << "End of Main" <<endl;
    return 0;
}
