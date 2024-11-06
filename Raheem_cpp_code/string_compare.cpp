#include <iostream>
#include <string>

using namespace std;

int main()
{
   string s1{"Testing the comparison functions."};;
   string s2{"Hello"};
   string s3{"stinger"};
   string s4{s2}; // "Hello

   cout << s1 << "\n" << s2 << "\n" << s3 << "\n"<< s4 << endl;

   // comparing s1 and s2
   if (s1 < s2) {
        cout << "s1 < s2\n";
   }
   else if (s1 > s2) {
        cout << "s1 > s2\n";
   }
   else {
        cout << "s1 = s2\n";
   }

   cout << s1.compare(s2) << endl; //+1 : s1 > s2
   cout << s4.compare(s2) << endl; //0  : s4 = s2
   cout << s2.compare(s3) << endl; //-1 : s2 < s3

   //https://www.geeksforgeeks.org/stdstringcompare-in-c/
   // comparing s1 and s2
   cout << "s1.compare(s2) = " << s1.compare(s2) << endl;

   // comparing s1 (elements 2-6) and s3 (elements 0-4) -->str1.compare(pos1, n1, str2, pos2, n2);
   cout << "s1.compare(2, 5, s3, 0, 5) = " << s1.compare(2, 5, s3, 0, 5) << endl;

   // comparing s2 and s4 --> str1.compare(pos, n, str2);
   cout << "s4.compare(0, s2.size(), s2) = " << s4.compare(0, s2.size(), s2) << endl;

   // comparing s2 and s4 --> str1.compare(pos, n, str2);
   cout << "s2.compare(0, 2, s4) = " << s2.compare(0, 3, s4) << endl;


    return 0;
}
