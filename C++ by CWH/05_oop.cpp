// ********* Tut # 29 *********
//Constructors In C++ 

//#include<iostream>
//using namespace std;
//
//class Complex{
//    int a, b;
//public:
//    // Creating a Constructor
//    // Constructor is a special member function with same name as of the class.
//    // It is used to initialize the objects of its class
//    
//    Complex(void); // Constructor declaration
//
//    void printNumber(void)
//    {
//        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//    }
//};
//
//Complex :: Complex(void){ // ----> This is a default constructor
//    a = 10;
//    b = 0;
//    // cout<<"Hello world";
//}
//
//int main(){
//    Complex c1, c2, c3;
//    c1.printNumber();
//    c2.printNumber();
//    c3.printNumber();
//
//    return 0;
//}










// ********* Tut # 30 (Part 1) *********
//Default and Parameterized Constructors (Complex Numbers)

//#include<iostream>
//using namespace std;
//
//class Complex {
//    int a, b;
//
//public:
//    Complex(void); // Constructor declaration
//    
//    // Parameterized Constructor
//    Complex(int, int);
//
//    void printNumber() {
//        cout << "Your number is " << a << " + " << b << "i" << endl;
//    }
//};
//
//Complex::Complex(void) // ----> This is a default constructor as it takes no parameters
//{
//    a = 0;
//    b = 0;
//    // cout<<"Hello world";
//}
//
//Complex::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
//{
//    a = x;
//    b = y;
//    // cout<<"Hello world";
//}
//
//int main(){
//    // Implicit call
//    Complex a(4, 6);
//    a.printNumber();
//
//    // Explicit call
//    Complex b = Complex(5, 7);
//    b.printNumber();
//
//    return 0;
//}






// ********* Tut # 30 (Part 2) *********
//Point Coordinates and Parameterized Constructors Example

//#include<iostream>
//using namespace std;
//
//class Point {
//    int x, y;
//public:
//    Point(int a, int b) {
//        x = a;
//        y = b;
//    }
//
//    void displayPoint() {
//        cout << "The point is (" << x << ", " << y << ")" << endl;
//    }
//};
//
//int main(){
//    Point p(1, 1);
//    p.displayPoint();
//
//    Point q(4, 6);
//    q.displayPoint();

	// c++ math sqrt  -- website
	
    // Challenge / Task given in the video:
    // Create a function (preferably a friend function) that takes 2 point objects 
    // and computes the distance between those two points.
    // Examples to test your code:
    // - Distance between (1, 1) and (1, 1) -> 0
    // - Distance between (0, 0) and (0, 5) -> 5
    // - Distance between (1, 0) and (4, 0) -> 3 (or similar test points discussed)

//    return 0;
//}




//Assignment

//create a function which takes two point objects and computes the distance between those two points
//Hint :make it a friend function
//#include<iostream>
//#include<cmath>
//using namespace std;
//class point{
//    int x ,y ;
//    friend void distance(point o1 ,point o2 );
//    public:
//    point (int a ,int b){
//        x=a;
//        y=b;
//    }
//    void display(){
//        cout<<"("<<x<<","<<y<<")"<<endl;
//    }
//};
//void distance(point o1 ,point o2){
//    float dist;
//dist=sqrt(pow(o2.x-o1.x ,2)+pow(o2.y-o1.y ,2));
//cout<<dist<<endl;
//}
//int main()
//{
//   point p(1,1);
//   p.display();
//   point q(2,2);
//   q.display(); 
//   distance(p,q);
//
//    return 0;
//}











// ********* Tut # 31 *********
//Constructor Overloading In C++

//#include<iostream>
//using namespace std;
//
//class Complex {
//    int a, b;
//
//public:
//    // Default constructor (takes no arguments)
//    Complex(void) {
//        a = 0;
//        b = 0;
//    }
//
//    // Parameterized constructor with 2 arguments
//    Complex(int x, int y) {
//        a = x;
//        b = y;
//    }
//
//    // Parameterized constructor with 1 argument (Constructor Overloading)
//    Complex(int x) {
//        a = x;
//        b = 0;
//    }
//
//    void printNumber() {
//        cout << "Your number is " << a << " + " << b << "i" << endl;
//    }   
//};
//
//int main(){
//    // Calls the 2-argument parameterized constructor
//    Complex c1(4, 6);
//    c1.printNumber();
//
//    // Calls the 1-argument parameterized constructor
//    Complex c2(5);
//    c2.printNumber();
//
//    // Calls the default constructor
//    Complex c3;
//    c3.printNumber();
//
//    return 0;
//}













// ********* Tut # 32 *********
//Constructors With Default Arguments

//#include<iostream>
//using namespace std;
//
//class Simple {
//    int data1;
//    int data2;
//    int data3;
//
//public:
//    // Constructor with default arguments
//    Simple(int a, int b = 9, int c = 8) {
//        data1 = a;
//        data2 = b;
//        data3 = c;
//    }
//
//    void printData();
//};
//
//void Simple::printData() {
//    cout << "The value of data1, data2 and data3 is " << data1 << ", " << data2 << " and " << data3 << endl;
//}
//
//int main() {
//    // Passing 2 arguments: data1 = 12, data2 = 13, and data3 takes default value 8
//    Simple s(12, 13);
//    s.printData();
//
//    // Note: Other test calls demonstrated in the video:
//    // Simple s(1, 4);    -> data1 = 1, data2 = 4, data3 = 8
//    // Simple s(1);       -> data1 = 1, data2 = 9, data3 = 8
//    // Simple s(12, 13, 14); -> data1 = 12, data2 = 13, data3 = 14
//
//    return 0;
//}














// ********* Tut # 33 *********
//Dynamic Initialization of Objects Using Constructors

//#include<iostream>
//using namespace std;
//
//// First research on this topic "Compound and simple interest"
//class BankDeposit {
//    int principal;
//    int years;
//    float interestRate;
//    float returnValue;
//
//public:
//    // Default blank constructor (needed when objects are declared before knowing input values)
//    BankDeposit() {}
//
//    // Constructor when interest rate is passed as a float (e.g., 0.04)
//    BankDeposit(int p, int y, float r);
//
//    // Constructor when interest rate is passed as an integer percentage (e.g., 14)
//    BankDeposit(int p, int y, int r);
//
//    void show();
//};
//
//BankDeposit::BankDeposit(int p, int y, float r) {
//    principal = p;
//    years = y;
//    interestRate = r;
//    returnValue = principal;
//    for (int i = 0; i < y; i++) {
//        returnValue = returnValue * (1 + interestRate);
//    }
//}
//
//BankDeposit::BankDeposit(int p, int y, int r) {
//    principal = p;
//    years = y;
//    interestRate = float(r) / 100;
//    returnValue = principal;
//    for (int i = 0; i < y; i++) {
//        returnValue = returnValue * (1 + interestRate);
//    }
//}
//
//void BankDeposit::show() {
//    cout << endl << "Principal amount was " << principal
//         << ". Return value after " << years
//         << " years is " << returnValue << endl;
//}
//
//int main() {
//    BankDeposit bd1, bd2, bd3;
//    int p, y;
//    float r; // Interest rate in decimal form (e.g., 0.04)
//    int R;   // Interest rate in percentage form (e.g., 4)
//
//    // Dynamic initialization using float interest rate
//    cout << "Enter the value of p y and r" << endl;
//    cin >> p >> y >> r;
//    bd1 = BankDeposit(p, y, r);
//    bd1.show();
//
//    // Dynamic initialization using integer percentage interest rate
//    cout << "Enter the value of p y and R" << endl;
//    cin >> p >> y >> R;
//    bd2 = BankDeposit(p, y, R);
//    bd2.show();
//
//    return 0;
//}













// ********* Tut # 34 *********
//Copy Constructor (important concept)

//#include<iostream>
//using namespace std;
//
//class Number {
//    int a;
//public:
//    // Default constructor
//    Number() {
//        a = 0;
//    }
//
//    // Parameterized constructor
//    Number(int num) {
//        a = num;
//    }
//
//    // When no copy constructor is found, compiler supplies its own copy constructor
//    Number(Number &obj) {
//        cout << "Copy constructor called!!!" << endl;
//        a = obj.a;
//    }
//
//    void display() {
//        cout << "The number for this object is " << a << endl;
//    }
//};
//
//int main() {
//    Number x, y, z(45), z2;
//    x.display();
//    y.display();
//    z.display();
//
//    // z1 should exactly resemble z or x or y
//    Number z1(z); // Copy constructor invoked
//    z1.display();
//
//    z2 = z; // Copy constructor not called (z2 was already created, this is simple assignment)
//    z2.display();
//
//    Number z3 = z; // Copy constructor invoked (object is being created in this same line)
//    z3.display();
//
//    return 0;
//}













// ********* Tut # 35 *********
// Destructor in C++

#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;

class num {
public:
    // Constructor
    num() {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    // Destructor (uses tilde ~ followed by class name)
    ~num() {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};

int main() {
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    } // n2 and n3 are destroyed here when exiting the block scope

    cout << "Back to main" << endl;
    return 0;
} // n1 is destroyed here when exiting main()

























