#include <iostream>

using namespace std;

void CreateWindow(const char * title, int x, int y, int width, int height);

void CreateWindow(const char * title, int x=-1, int y=-1, int width=-1, int height=-1)
{
    cout << "Title is =" << title <<endl;
    cout << "x is =" << x <<endl;
    cout << "y is =" << y <<endl;
    cout << "width is =" << width <<endl;
    cout << "height is =" << height <<endl;
}

int main()
{
    //default values
    CreateWindow("Notepad_1");

    //default arguments begin "from right to left"
    CreateWindow("Notepad_2", 100, 200); //x=100; y=200;
    //default arguments begin "from right to left"
    CreateWindow("Notepad_3", -2, 100, 200); //x=-2; y=100; width=200; height=-1;
}
