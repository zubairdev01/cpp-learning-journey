// ********* Tut # 16 *********

//#include<iostream>
//using namespace std;
//
//// This will not swap a and b (Call by Value)
//void swap(int a, int b){ 
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//// Call by reference using pointers
//void swapPointer(int *a, int *b){ 
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// Call by reference using C++ reference variables
////void swapReferenceVar(int &a, int &b){ 
//int & swapReferenceVar(int &a, int &b){  
//
//    int temp = a;
//    a = b;
//    b = temp;
//    return a;
//}
//
//int main(){
//    int x = 4, y = 5;
////    cout<<"The sum of 4 and 5 is "<<sum(a,b);
//    cout << "The value of x is " << x << " and the value of y is " << y << endl;
//    
//    // swap(x, y); // This will NOT swap x and y because it uses call by value
//    // swapPointer(&x, &y); // This WILL swap x and y using pointer references
//    
//    swapReferenceVar(x, y) = 766; // This WILL swap x and y using C++ reference variables
//    
//    cout << "The value of x is " << x << " and the value of y is " << y << endl;
//    
//    return 0;
//}









// ********* Tut # 17 *********
// Inline Functions, Default Arguments & Constant Arguments

#include<iostream>
using namespace std;
// do not use inline function when recursion happened (also static)
// Inline function: requests the compiler to replace the function call with the actual code
inline int product(int a, int b){
    // Not recommended to use with static variables, loops, or switch statements
    
	return a * b;
}

// Function demonstrating a static variable
int func(int a, int b){
    // Static variable is initialized only once; its value is retained across function calls
    static int c = 0; 
    c = c + 1; // Increments every time the function is run
    return a * b + c;
}

// Function using Default Arguments (factor = 1.04 is a default argument)
// Note: Default arguments should always be written on the rightmost side
float moneyReceived( int currentBankBalance, float factor = 1.04){
    return currentBankBalance * factor;
}

// Function using Constant Arguments (const keyword prevents the function from modifying the variables)
// int strlen(const char *p){
//    
 }

int main(){
    int a, b;
    // cout << "Enter the value of a and b: ";
    // cin >> a >> b;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;

    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money) << " Rs after 1 year." << endl;
    
    // For VIP persons, a different factor can be passed
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.1) << " Rs after 1 year." << endl;
    
    return 0;
} 









// ********* Tut # 18 *********

//#include<iostream>
//using namespace std;
//
//// Recursive function to calculate the Fibonacci sequence at position n
//int fib(int n){
//    if(n < 2){
//        return 1;
//    }
//    return fib(n-2) + fib(n-1);
//}
//
//// Recursive function to calculate the factorial of a number n
//int factorial(int n){
//    // Base condition to stop recursion
//    if(n <= 1){
//        return 1;
//    }
//    return n * factorial(n - 1);
//}
//
//int main(){
//    int a;
//    cout << "Enter a number" << endl;
//    cin >> a;
//    
//    // cout << "The factorial of a is " << factorial(a) << endl;
//    cout << "The term in fibonacci sequence at position " << a << " is " << fib(a) << endl;
//    
//    return 0;
//}
//Key Concepts Covered in the Video:Recursive Function: A function that calls itself to solve smaller instances of the same problem.Base Condition: A crucial stopping condition (e.g., if(n <= 1) for factorials) that prevents infinite recursion and stack overflow errors.Factorial Example (factorial): Computes $n!$ by multiplying $n$ with the factorial of $(n - 1)$.Fibonacci Example (fib): Computes the sum of the two preceding numbers in the sequence (fib(n-2) + fib(n-1)).












// ********* Tut # 19 *********

#include<iostream>
using namespace std;

// Calculates the sum of 2 numbers
int add(int a, int b){
    cout << "Using function with 2 arguments" << endl;
    return a + b;
}

// Calculates the sum of 3 numbers (Overloaded function with same name 'add')
int add(int a, int b, int c){
    cout << "Using function with 3 arguments" << endl;
    return a + b + c;
}

// Calculate the volume of a cylinder (radius r, height h)
int volume(double r, int h){
    return (3.14 * r * r * h);
}

// Calculate the volume of a cube (side a)
int volume(int a){
    return (a * a * a);
}

// Calculate the volume of a rectangular box (length l, breadth b, height h)
int volume(int l, int b, int h){
    return (l * b * h);
}

int main(){
    // Testing function overloading with add
    cout << "The sum of 3 and 6 is " << add(3, 6) << endl;
    cout << "The sum of 3, 7 and 6 is " << add(3, 7, 6) << endl;
    
    // Testing function overloading with volume calculations
    cout << "The volume of cylinder of radius 3 and height 7 is " << volume(3, 7) << endl;
    cout << "The volume of cube of side 3 is " << volume(3) << endl;

    cout << "The volume of cuboid of 3, 7 and 6 is " << volume(3, 7, 6) << endl;
    
    return 0;
}











