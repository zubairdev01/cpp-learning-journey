//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int glo = 6;
//void sum() {
//	int a;
//	cout<< glo;
//}
//int main() {
//	
////	****** tut # 04 ******
////c++ reserved keywords list website
//
//	int glo = 9;
//	glo = 78;
//	
//	int a = 14;
//	int b = 33;
////	int a = 14, int b = 33;
//
//	float pi = 3.14;
//	char c ='d';
//	bool is_true = true;
//	
//	sum();
////	cout<< glo << is_true;
//	
//	cout<< "This is tutorial 4. <<endl Here the value of a is "<<a<<". <<endl The value of b is "<<b ;
//	cout<< "<<endl The value of pi is: "<<pi;
//	cout<< "<<endl The value of c is: "<<c;
//	
//	return 0;
//	
//}



	
	
//	****** Tut # 05 ******

//#include <iostream>
//
//using namespace std;
//int main() {
//	
//	int num1, num2;
//	
//	cout<< "Enter the value of num 1: ";
//	cin>> num1;
//	
//	cout<< "Enter the value of num 2: ";
//	cin>> num2;
//	
//	cout<< "The sum is "<< num1 + num2;
//
//	return 0;
//	
//}





//	****** Tut # 06 ******

// https://en.cppreference.com/cpp/header

// There are two types of header files:
// 1. System header files: It comes with the compiler
// #include <iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" // <-- Requires 'this.h' to be present in the current directory, otherwise throws an error

//  #include <iostream>
//
//using namespace std;
//int main() {
//
//    int a = 4, b = 5;
//
//    cout << "Operators in C++:" << endl;
//    cout << "Following are the types of operators in C++" << endl;
//
//    // 1. Arithmetic operators
//    cout << "The value of a + b is " << a + b << endl;
//    cout << "The value of a - b is " << a - b << endl;
//    cout << "The value of a * b is " << a * b << endl;
//    cout << "The value of a / b is " << a / b << endl;
//    cout << "The value of a % b is " << a % b << endl;
//    cout << "The value of a++ is " << a++ << endl;
//    cout << "The value of a-- is " << a-- << endl;
//    cout << "The value of ++a is " << ++a << endl;
//    cout << "The value of --a is " << --a << endl;
//    cout << endl;
//
//    // 2. Assignment Operators -> used to assign values to variables
//    // int x = 3, y = 9;
//    // char d = 'd';
//
//    // 3. Comparison / Relational operators
//    cout << "Following are the comparison operators in C++" << endl;
//    cout << "The value of a == b is " << (a == b) << endl;
//    cout << "The value of a != b is " << (a != b) << endl;
//    cout << "The value of a >= b is " << (a >= b) << endl;
//    cout << "The value of a <= b is " << (a <= b) << endl;
//    cout << "The value of a > b is " << (a > b) << endl;
//    cout << "The value of a < b is " << (a < b) << endl;
//    cout << endl;
//
//    // 4. Logical operators
//    cout << "Following are the logical operators in C++" << endl;
//    cout << "The value of this logical AND operator ((a==b) && (a<b)) is: " 
//         << ((a == b) && (a < b)) << endl;
//    cout << "The value of this logical OR operator ((a==b) || (a<b)) is: " 
//         << ((a == b) || (a < b)) << endl;
//    cout << "The value of this logical NOT operator (!(a==b)) is: " 
//         << (!(a == b)) << endl;
//
//// research on -- bit wise operator  
//
//	return 0;
//	
//}
	
	
	
	
	//	****** Tut # 07 ******
	
//	#include <iostream>
//
//using namespace std;
//
//int c = 45; // Global variable
//
//int main() {
//    
//    // ************* Build in Data types *************
//    int a, b, c;
//    cout << "Enter the value of a:" << endl;
//    cin >> a;
//    cout << "Enter the value of b:" << endl;
//    cin >> b;
//    c = a + b;
//    cout << "The sum is " << c << endl;
//    cout << "The global c is " << ::c << endl; // Using Scope Resolution Operator (::)
//
//
//    // ************* Float, double and long double Literals *************
//    float d = 34.4f;        // 'f' or 'F' specifies a float literal
//    long double e = 34.4l;  // 'l' or 'L' specifies a long double literal
//    
//    cout << "The size of 34.4 is " << sizeof(34.4) << endl;   // Default floating point literal is double
//    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
//    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
//    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
//    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
//    cout << "The value of d is " << d << endl << "The value of e is " << e << endl;
//
//
//    // ************* Reference Variables *************
//    // Rohan Das -----> Monty -----> Rohu -----> Dangerous Coder (Aliases for the same person)
//    float x = 455;
//    float & y = x; // 'y' is a reference variable pointing to 'x'
//    cout << x << endl;
//    cout << y << endl;
//
//
//    // ************* Typecasting *************
//    int a_val = 45;
//    float b_val = 45.46;
//    
//    cout << "The value of a_val is " << (float)a_val << endl;
//    cout << "The value of a_val is " << float(a_val) << endl;
//
//    cout << "The value of b_val is " << (int)b_val << endl;
//    cout << "The value of b_val is " << int(b_val) << endl;
//    
//    int c_val = int(b_val);
//
//    cout << "The expression is " << a_val + b_val << endl;
//    cout << "The expression is " << a_val + int(b_val) << endl;
//    cout << "The expression is " << a_val + (int)b_val << endl;
//
//    return 0;
//}
	
	
	
	
	

	//	****** Tut # 08 ******

//https://en.cppreference.com/cpp/language/operator_precedence

#include <iostream>
#include <iomanip> // Header file required for manipulators like setw

using namespace std;

int main() {
    // ************* Variables vs Constants *************
//     int a = 34;
//     cout << "The value of a was: " << a << endl;
//     a = 45; // Variables can be modified
//     cout << "The value of a is: " << a << endl;

//     Constants in C++
     const int a = 3;
     cout << "The value of a was: " << a << endl;
    // a = 45; // Expression must be a modifiable lvalue -> Causes a compiler error
     cout << "The value of a is: " << a << endl;


    // ************* Manipulators in C++ *************
    int x = 3, b = 78, c = 1233;

    // Without setw (unaligned output)
    cout << "The value of a without setw is: " << x << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl;

    // With setw manipulator (right-aligned to specified field width)
    cout << "The value of a is: " << setw(4) << x << endl;
    cout << "The value of b is: " << setw(4) << b << endl;
    cout << "The value of c is: " << setw(4) << c << endl;


    // ************* Operator Precedence & Associativity *************
    int y = 3, z = 4;
    // int z = (x * 5) + y;
    int m = ((((y * 5) + z) - 45) + 87);
    
    cout << m << endl;

    return 0;
}




