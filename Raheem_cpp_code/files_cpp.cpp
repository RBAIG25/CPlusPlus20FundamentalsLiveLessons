//file handling in c++
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char arr1[100];
    cout << "Enter Your Name and Age: \n";
    cin.getline(arr1,100);

    fstream myfile("xyz.txt", ios::out | ios::app); //ate - append at end of file
    myfile << arr1;
    myfile.close();
    cout << "File Write Operation Done Successfully\n";

    char arr2[100];
    cout << "\nReading From File Started" << endl;
    ifstream obj("xyz.txt");
    obj.getline(arr2,100);
    obj.close();
    cout << "Read Array Content is: "<< arr2 <<endl;
    cout << "File Read Operation Done Successfully";

    return 0;
}
