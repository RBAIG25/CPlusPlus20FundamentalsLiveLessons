#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s{"airplane"};

    //https://www.geeksforgeeks.org/substring-in-cpp/
    //substr (size_t pos, size_t len) -> len=str.size() by default.
    cout << s.substr(3, 4) << '\n'; // retrieve substring "plan"

    // Take any string
    string s1 = "Geeks";

    // Copy two characters of s1 (starting
    // from index 3)
    string r = s1.substr(3, 2);

    // prints the result
    cout << "String is: " << r << endl;

    // Take any string
    string s2 = "dog:cat";

    // Find position of ':' using find()
    int pos = s2.find(":");

    // Copy substring after pos, len=str.size() by default.
    string sub = s2.substr(pos + 1);

    // prints the result
    cout << "String is: " << sub <<endl;

    // Copy substring before pos
    // Extract everything before the ":" in the string
    // "dog:cat".
    sub = s2.substr(0, pos);

    // prints the result
    cout << "String is: " << sub <<endl;

    //str.length() is same as str.size()
    cout << "str.length() = " << s2.length() << endl;
    cout << "str.size() = " << s2.size() << endl;

    return 0;
}
