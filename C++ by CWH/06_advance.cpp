// ********* Tut # 37 *********
// Inheritance Syntax & Visibility Mode in C++

#include <iostream>
using namespace std;

// Base Class: Employee
class Employee {
public:
    int id;
    float salary;

    // Default constructor for the Employee class 
    // (Required when a derived class calls the base constructor automatically)
    Employee() {}

    // Parameterized constructor
    Employee(int inpId) {
        id = inpId;
        salary = 34.0;
    }
};

/* 
   Syntax for Deriving a Class:
   class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
   {
       // members/methods/etc...
   };
   
   Note:
   1. Default visibility mode is PRIVATE.
   2. Public Visibility Mode: Public members of the base class become public members of the derived class.
   3. Private Visibility Mode: Public members of the base class become private members of the derived class.
   4. Private members of a base class are NEVER inherited.
*/

// Derived Class: Programmer (inheriting publicly from Employee)
class Programmer : public Employee {
public:
    int languageCode = 9;

    // Programmer Constructor
    Programmer(int inpId) {
        id = inpId; // Accessible because Employee is inherited publicly
    }

    void getData() {
        cout << id << endl;
    }
};

int main() {
    // Creating base class objects
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    // Creating derived class object
    Programmer skillF(10);
    
    // Testing data access depending on visibility mode:
    // If Programmer inherited Employee privately, skillF.id would throw a compiler error.
    // With public inheritance, skillF.id is accessible:
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl; 

    skillF.getData();

    return 0;
}
