#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1{"red"};
    string s2{s1};
    string s3;
    cout << "Hello World" << endl;
    cout << "String#1: " << s1 << endl;
    cout << "String#2: " << s2 << endl;
    s3 = s1;
    cout << s1 << "\n" << s2 << "\n" << s3 << "\n" << endl;

    s1.at(0) = 'b';
    s2.at(1) = 'i';
    s3.at(2)= 'x';

    cout << s1 << "\n" << s2 << "\n" << s3 << "\n" << endl;

    string s4{s1 + " box"}; //concate
    cout << s4 << endl;

    s2.append(" off");
    s3 += " cat";

    cout << s1 << "\n" << s2 << "\n" << s3 << "\n" << endl;

    string s5, s6; // initialized to the empty string
    s5.append(s2, 2, s2.size() - 2);  //str1.append(str2, pos, num);
    cout << s5 << "\n" << endl;
    cout << s5;
    s5.append(s1);                   //str1.append(str2);
    cout << s5 << "\n" << endl;

    s1.append(3, '!!!');        //str.append(num, c); c: is Character which we have to append multiple times.
    cout << s1 << "\n" << endl;

    s6 = s1 + s2 + s3 + s4 + s5;
    cout << s6 << "\n";

    string str1("Hello World! ");
    string str2("GeeksforGeeks");

    // Appends all characters from
    // str2.begin()+5, str2.end() to str1
    str1.append(str2.begin() + 5, str2.end());

    cout << str1 << "\n";

    string s7{"Hello "};
    string s8{"World"};
    //https://www.geeksforgeeks.org/strcat-in-c/
    //char *strcat(char *dest, const char *src);
    s7 += s8;
    cout << s7 << "\n" << s8 <<endl;


    return 0;
}
