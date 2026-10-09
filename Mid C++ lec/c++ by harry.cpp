#include <iostream>
#include <string>
using namespace std;

// ==========================================
// 8. FUNCTIONS
// ==========================================
int sum(int a, int b) {
    int c = a + b;
    return c;
}

// ==========================================
// 12. CLASSES AND OBJECTS (OOPs)
// ==========================================
class Employee {
public:
    string name;
    int salary;

    // Constructor
    Employee(string name, int salary, int secretPassword) {
        this->name = name;
        this->salary = salary;
        this->secretPassword = secretPassword;
    }

    void printDetails() {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
    }

    void getSecretPassword() {
        cout << "The secret password is " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};

int main() {
    // ==========================================
    // 1. FIRST C++ PROGRAM & PRINTING OUTPUT
    // ==========================================
    cout << "Hello World" << endl;
    cout << "Next line text" << endl;

    // ==========================================
    // 2. VARIABLES & DATA TYPES
    // ==========================================
    short a;
    int b = 89;
    long c;
    long long d;

    float const score = 45.32; // 'const' prevents modification
    double score2 = 45.322;
    long double score3 = 45.332;

    char camel = 'c';
    string name = "Harry";
    bool isTrue = true;

    cout << "The score is " << score << endl;

    // ==========================================
    // 3. USER INPUT (cin)
    // ==========================================
    int input1, input2;
    cout << "Enter first number: ";
    cin >> input1;
    cout << "Enter second number: ";
    cin >> input2;

    // ==========================================
    // 4. ARITHMETIC & ASSIGNMENT OPERATORS
    // ==========================================
    cout << "a + b = " << input1 + input2 << endl;
    cout << "a - b = " << input1 - input2 << endl;
    cout << "a * b = " << input1 * input2 << endl;
    cout << "a / b = " << (float) input1 / input2 << endl; // Typecasting to float

    // ==========================================
    // 5. IF - ELSE STATEMENTS
    // ==========================================
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 150 || age < 1) {
        cout << "Invalid age" << endl;
    }
    else if (age >= 18) {
        cout << "You can vote" << endl;
    } 
    else {
        cout << "You cannot vote" << endl;
    }

    // ==========================================
    // 6. SWITCH CASE STATEMENT
    // ==========================================
    switch (age) {
    case 12:
        cout << "You are 12 years old" << endl;
        break;
    case 18:
        cout << "You are 18 years old" << endl;
        break;
    default:
        cout << "You are neither 12 nor 18 years old" << endl;
        break;
    }

    // ==========================================
    // 7. LOOPS (while, do-while, for)
    // ==========================================
    // While Loop
    int index = 0;
    while (index < 5) {
        cout << "We are at index number " << index << endl;
        index++;
    }

    // Do-While Loop
    int j = 0;
    do {
        cout << "Do-while index: " << j << endl;
        j++;
    } while (j < 5);

    // For Loop
    for (int i = 0; i < 5; i++) {
        cout << "The value of i is " << i << endl;
    }

    // Calling the sum function
    cout << "Sum function output: " << sum(5, 6) << endl;

    // ==========================================
    // 9. ARRAYS (1D & 2D)
    // ==========================================
    int arr[] = {1, 3, 6}; // 1D Array
    cout << "Element at index 0: " << arr[0] << endl;

    int arr2D[2][3] = {    // 2D Array
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; i++) {
        for (int k = 0; k < 3; k++) {
            cout << "The value at " << i << "," << k << " is " << arr2D[i][k] << endl;
        }
    }

    // ==========================================
    // 10. STRINGS & STRING FUNCTIONS
    // ==========================================
    string myString = "Harry";
    cout << "The length of myString is " << myString.length() << endl;
    cout << "Substring (0, 3): " << myString.substr(0, 3) << endl;

    // ==========================================
    // 11. POINTERS
    // ==========================================
    int num = 34;
    int *ptra;
    ptra = &num;

    cout << "The address of num is " << &num << endl;
    cout << "The address stored in ptra is " << ptra << endl;
    cout << "The value at address ptra is " << *ptra << endl;

    // ==========================================
    // 12. OBJECT-ORIENTED PROGRAMMING
    // ==========================================
    Employee har( "Harry constructor", 100, 123456);
    har.printDetails();
    har.getSecretPassword();

    return 0;
}
