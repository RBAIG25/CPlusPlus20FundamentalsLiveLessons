#include <iostream>
#include <string>

using namespace std;

void StringSwap()
{

    string s1{"one"};
    string s2{"two"};

    cout << "Before swap:\n" << "s1=" << s1 << "\n" << "s2=" << s2 <<endl;
    s1.swap(s2); // swap strings
    cout << "After swap:\n" << "s1=" << s1 << "\n" << "s2=" << s2 << "\n" <<endl;
}

// display string statistics
void printStringStatistics(string & s)
{
    cout << "Statistics before input:\n";
    cout << "capacity= " << s.capacity() <<"\n"
         << "max size= " << s.max_size() <<"\n"
         << "size= " << s.size() <<"\n"
         << "empty= " << s.empty() <<endl;
}

void StringStatistics() {

    string s; // empty string

    printStringStatistics(s);

    cout << "\n\nEnter a string: ";
    cin >> s; // delimited by whitespace
    cout << "The string entered was: " << s << endl;

    cout << "Statistics after input:\n";
    printStringStatistics(s);

    cout << "\n\nEnter a string: ";
    cin >> s; // delimited by whitespace
    cout << "The string entered was: " << s << endl;

    cout << "Statistics after input:\n";
    printStringStatistics(s);


    // append 46 characters to string
    s += "1234567890abcdefghijklmnopqrstuvwxyz1234567890";
    cout << "\n\nstring is now: " << s <<endl;
    cout << "Statistics after concatenation:\n";
    printStringStatistics(s);

    s.resize(s.size() + 10); // add 10 elements to string
    cout << "\n\nStatistics after resizing to add 10 characters:\n";
    printStringStatistics(s);
    std::cout << '\n';

}

int main() {
    StringSwap();
    StringStatistics();
}
