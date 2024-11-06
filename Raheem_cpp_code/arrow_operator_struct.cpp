// C++ program to show Arrow operator
// used in structure
#include <iostream>
#include <string>

using namespace std;

// Creating the structure
struct student {
    int age;
    float percentage;
    string name;
};

struct student2 {
    int age;
    float percentage;
    string name;
};

// Creating the structure object
struct student * emp = NULL;
struct student emp1;
struct student2 emp2;

// Driver code
int main()
{
    // Assigning memory to struct variable emp
    //emp = (struct student *)
    //    malloc(sizeof(struct student));
    emp = &emp1;

    // Assigning value to age variable
    // of emp using arrow operator
    emp->age = 19;
    emp->name = "Rayyan Baig";
    emp->percentage = 99.99;

    // DIsplaying the assigned value to the variable
    cout <<"Name= "<< emp->name <<endl;
    cout <<"Age= "<< emp->age <<endl;
    cout <<"Percentage= "<< emp->percentage <<endl;


    // Assigning memory to struct variable emp
    //emp2 = (struct student*)
    //malloc(sizeof(struct student));

    // Assigning value to age variable
    // of emp using arrow operator
    emp2.age = 35;
    emp2.name = "Raheem Baig";
    emp2.percentage = 99.99;

    // DIsplaying the assigned value to the variable
    cout <<"Name= "<< emp2.name <<endl;
    cout <<"Age= "<< emp2.age <<endl;
    cout <<"Percentage= "<< emp2.percentage <<endl;


    return 0;
}


