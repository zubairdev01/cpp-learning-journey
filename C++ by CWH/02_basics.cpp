// ********* Tut # 09 *********

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    // Basic program structure
//    // cout << "This is tutorial 9";
//
//    int age;
//    cout << "Tell me your age" << endl;
//    cin >> age;

    // ************* 1. Selection control structure: If else-if else ladder *************
    // if ((age < 18) && (age > 0)) {
    //     cout << "You cannot come to my party" << endl;
    // }
    // else if (age == 18) {
    //     cout << "You are a kid and you will get a kid pass to the party" << endl;
    // }
    // else if (age < 1) {
    //     cout << "You are not yet born" << endl;
    // }
    // else {
    //     cout << "You can come to the party" << endl;
    // }


    // ************* 2. Selection control structure: Switch Case statements *************
//    switch (age)
//    {
//    case 18:
//        cout << "You are 18" << endl;
//        break;
//    case 22:
//        cout << "You are 22" << endl;
//        break;
//    case 2:
//        cout << "You are 2" << endl;
//        break;
//
//    default:
//        cout << "No special cases" << endl;
//        break;
//    }
//
//    cout << "Done with switch case" << endl;
//
//    return 0;
//}





// ********* Tut # 10 *********

//#include<iostream>
//using namespace std;
//
//int main() {
//	
//    // 1. For Loop Example (Printing 1 to 40)
//    cout << "--- For Loop ---" << endl;
//    for (int i = 1; i <= 40; i++) {
//        cout << i << endl;
//    }
//
//    // 2. While Loop Example (Printing 1 to 40)
//    cout << "--- While Loop ---" << endl;
//    int j = 1;
//    while (j <= 40) {
//        cout << j << endl;
//        j++;
//    }
//
//    // 3. Do-While Loop Example (Printing 1 to 40)
//    cout << "--- Do-While Loop ---" << endl;
//    int k = 1;
//    do {
//        cout << k << endl;
//        k++;
//    } while (k <= 40);
//
//    // 4. Quick Quiz: Multiplication Table of 6
//    cout << "--- Multiplication Table of 6 ---" << endl;
//    for (int i = 1; i <= 10; i++) {
//        cout << 6 << " * " << i << " = " << 6 * i << endl;
//    }
//return 0;
//}





// ********* Tut # 11 *********

//#include<iostream>
//using namespace std;
//
//int main() {
//    for (int i = 0; i < 4; i++) {
//        if (i == 2) {
//            break;
////            continue;
//        }
//        cout << i << endl;
//    }
//    return 0;
//}



// ********* Tut # 12 *********

//#include<iostream>
//using namespace std;
//
//int main(){
//    // What is a pointer? ----> Data type which holds the address of other data types
//    int a = 3;
//    int* b;
//    b = &a;
//
//    // & ---> (Address of) Operator
//    cout << "The address of a is " << &a << endl;
//    cout << "The address of a is " << b << endl;
//
//    // * ---> (value at) Dereference operator
//    cout << "The value at address b is " << *b << endl;
//
//    // Pointer to pointer
//    int** c = &b;
//    cout << "The address of b is " << &b << endl;
//    cout << "The address of b is " << c << endl;
//    cout << "The value at address c is " << *c << endl;
//    cout << "The value at address value_at(value_at(c)) is " << **c << endl;
//
//    return 0;
//}






// ********* Tut # 13 *********

//#include<iostream>
//using namespace std;
//
//int main(){
//    // Array Initialization
//    int marks[4] = {23, 45, 56, 89};
//
//    // Another way of defining an array
//    int mathMarks[4];
//    mathMarks[0] = 2278;
//    mathMarks[1] = 738;
//    mathMarks[2] = 378;
//    mathMarks[3] = 578;
//
//    // You can change the value of an array
//    marks[2] = 455;
//    
//    cout << "These are marks" << endl;
//    cout << marks[0] << endl;
//    cout << marks[1] << endl;
//    cout << marks[2] << endl;
//    cout << marks[3] << endl;
//
//    cout << "These are math marks" << endl;
//    cout << mathMarks[0] << endl;
//    cout << mathMarks[1] << endl;
//    cout << mathMarks[2] << endl;
//    cout << mathMarks[3] << endl;
//
//    // Printing array elements using a for loop
//    cout << "Printing marks using for loop:" << endl;
//    for (int i = 0; i < 4; i++) {
//        cout << "The value of marks " << i << " is " << marks[i] << endl;
//    }
//
//    // Quick Quiz: Try printing array using while and do-while loops
//    // While loop:
//    int i = 0;
//    cout << "\nPrinting marks using while loop:" << endl;
//    while (i < 4) {
//        cout << "The value of marks " << i << " is " << marks[i] << endl;
//        i++;
//    }
//
//    // Do-while loop:
//    int j = 0;
//    cout << "\nPrinting marks using do-while loop:" << endl;
//    do {
//        cout << "The value of marks " << j << " is " << marks[j] << endl;
//        j++;
//    } while (j < 4);
//
//    // Pointers and arrays
//    int* p = marks;
//    cout<<*(p++)<<endl;
//    cout<<*p<<endl;
//    cout<<*(++p)<<endl;
//    
////    cout << "\nUsing Pointer Arithmetic:" << endl;
////    cout << "The value of *p is " << *p << endl;
////    cout << "The value of *(p+1) is " << *(p + 1) << endl;
////    cout << "The value of *(p+2) is " << *(p + 2) << endl;
////    cout << "The value of *(p+3) is " << *(p + 3) << endl;
//
//    return 0;
//}







// ********* Tut # 14 *********

//#include<iostream>
//using namespace std;
//
//// 1. Defining a Structure using typedef
//typedef struct employee {
//    int eId;          // 4 bytes
//    char favChar;     // 1 byte
//    float salary;     // 4 bytes
//} ep;
//
//// 2. Defining a Union
//union money {
//    int rice;         // 4 bytes
//    char car;         // 1 byte
//    float pounds;     // 4 bytes
//};
//
//int main() {
//    // --- STRUCTURES DEMO --- 
//    ep harry;
//    struct employee shubham;
//    struct employee rohanDas;
//
//    harry.eId = 1;
//    harry.favChar = 'c';
//    harry.salary = 1200000;
//
//    cout << "The value is " << harry.eId << endl;
//    cout << "The value is " << harry.favChar << endl;
//    cout << "The value is " << harry.salary << endl;
//
//    // --- UNIONS DEMO ---
//    union money m1;
//    m1.rice = 34;
//    m1.car = 'c'; // This will overwrite 'rice' because memory is shared
//    
//    // If you print m1.rice here, it will show garbage/corrupted value 
//    // because 'car' has overwritten that memory block.
//    cout << m1.car << endl; 
//
//    // --- ENUMS DEMO ---
//    enum Meal { breakfast, lunch, dinner };
//    
//    Meal m1Meal = lunch;
//    cout << m1Meal << endl; // Prints 1 (since lunch corresponds to index 1)
//    
//    // You can also declare them directly like this:
//    // enum Meal { breakfast, lunch, dinner };
//    // cout << breakfast << endl;
//    // cout << lunch << endl;
//    // cout << dinner << endl;
//
//    return 0;
//}








// ********* Tut # 15 *********

#include<iostream>
using namespace std;

// Function prototype 
// Syntax: type function-name (arguments);
int sum(int a, int b); // --> Acceptable
// int sum(int a, int b); // --> Not Acceptable (Duplicate or conflicting)
int sum(int, int); // --> Acceptable
// void g(void); // --> Acceptable
void g(); // --> Acceptable

int sum(int a, int b){
    // Formal Parameters a and b will take values from actual parameters num1 and num2.
    int c = a + b;
    return c;
}

void g(){
    cout << "\nHello, Good Morning";
}

int main(){
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    
    // num1 and num2 are actual parameters
    cout << "The sum is " << sum(num1, num2) << endl;
    
    // Calling the void function
    g();
    
    return 0;
}
