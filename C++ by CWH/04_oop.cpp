// ********* Tut # 21 *********

//#include<iostream>
//using namespace std;
//
//class Employee
//{
//    private:
//        int a, b, c;
//    public:
//        int d, e;
//        void setData(int a1, int b1, int c1); // Declaration
//        void getData(){
//            cout << "The value of a is " << a << endl;
//            cout << "The value of b is " << b << endl;
//            cout << "The value of c is " << c << endl;
//            cout << "The value of d is " << d << endl;
//            cout << "The value of e is " << e << endl;
//        }
//};
//
//void Employee :: setData(int a1, int b1, int c1){
//    a = a1;
//    b = b1;
//    c = c1;
//}
//
//int main(){
//    Employee harry;
//    // harry.a = 134; --> This will throw an error as 'a' is private and cannot be accessed directly outside the class
//    harry.d = 34;
//    harry.e = 89;
//    harry.setData(1, 2, 4);
//    harry.getData();
//    
//    return 0;
//}











// ********* Tut # 22 *********

//#include<iostream>
//#include<string>
//using namespace std;
//
//class binary {
//	string s;
//	
//	public:
//		void read (void);
//		void chk_bin(void);
//};
//
//void binary :: read (void) {
//	cout << "Enter a binary number" <<endl;
//	cin>>s;
//};
//void binary :: chk_bin(void) {
//	for (int i=0; i<s.length(); i++)
//	{
//		if(s.at(i)!='0' && s.at(i)!='1') {
//			cout <<"Incorrect binary format" <<endl;
//			exit(0);
//		}
//	}
//};
//
//int main () {
//	binary b;
//	b.read();
//	b.chk_bin();
//	
//	return 0;
//}









// ********* Tut # 23 *********
// C++ Objects Memory Allocation & using Arrays in Classes

//#include <iostream>
//using namespace std;
//
//class Shop {
//    int itemId[100];
//    int itemPrice[100];
//    int counter;
//
//public:
//    void initCounter(void) { counter = 0; }
//    void setPrice(void);
//    void displayPrice(void);
//};
//
//void Shop :: setPrice(void) {
//    cout << "Enter Id of your item no " << counter + 1 << endl;
//    cin >> itemId[counter];
//    cout << "Enter Price of your item" << endl;
//    cin >> itemPrice[counter];
//    counter++;
//}
//
//void Shop :: displayPrice(void) {
//    for (int i = 0; i < counter; i++) {
//        cout << "The Price of item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
//    }
//}
//
//int main() {
//    Shop s;
//    s.initCounter();
//    s.setPrice();
//    s.setPrice();
//    s.setPrice();
//    s.displayPrice();
//    return 0;
//}











// ********* Tut # 24 *********
//Static Data Members & Methods in C++ OOPS

//#include <iostream>
//using namespace std;
//
//class Employee {
//    int id;
//    static int count;
//
//public:
//    void setData(void) {
//        cout << "Enter the id" << endl;
//        cin >> id;
//        count++;
//    }
//    void getData(void) {
//        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
//    }
//    
//    static void getCount(void) {
////    	cout << id; // throws an error
//    	cout << "The value of count is " << count << endl;
//	}
//};
//
//// Count is the Static data member of class Employee
//int Employee::count; // Default value is 0
//
//int main(){
//    Employee harry, rohan, lovish;
//    // harry.id = 1;
//    // harry.count = 1; // cannot do this as id and count are private
//
//    harry.setData();
//    harry.getData();
//    Employee::getCount();
//     
//    rohan.setData();
//    rohan.getData();
//    Employee::getCount();
//
//    lovish.setData();
//    lovish.getData();
//    Employee::getCount();
//
//
//    return 0;
//}









// ********* Tut # 25 *********
//Array of Objects & Passing Objects as Function Arguments in C++

//#include <iostream>
//using namespace std;
//
//class complex {
//    int a;
//    int b;
//
//public:
//    void setData(int v1, int v2) {
//        a = v1;
//        b = v2;
//    }
//
//    void setDataBySum(complex o1, complex o2) {
//        a = o1.a + o2.a;
//        b = o1.b + o2.b;
//    }
//
//    void printNumber() {
//        cout << "Your complex number is " << a << " + " << b << "i" << endl;
//    }
//};
//
//int main() {
//    complex c1, c2, c3;
//    
//    c1.setData(1, 2);
//    c1.printNumber();
//
//    c2.setData(3, 4);
//    c2.printNumber();
//
//    c3.setDataBySum(c1, c2);
//    c3.printNumber();
//
//    return 0;
//}









// ********* Tut # 26 *********
//Friend Functions in C++

//#include <iostream>
//using namespace std;
//
//class Complex {
//    int a, b;
//
//public:
//    void setNumber(int n1, int n2) {
//        a = n1;
//        b = n2;
//    }
//
//    // Below line means that non-member - sumComplex function is allowed to do anything with my private parts (data members)
//    friend Complex sumComplex(Complex o1, Complex o2);
//
//    void printNumber() {
//        cout << "Your number is " << a << " + " << b << "i" << endl;
//    }
//};
//
//Complex sumComplex(Complex o1, Complex o2) {
//    Complex o3;
//    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
//    return o3;
//}
//
//int main() {
//    Complex c1, c2, sum;
//    c1.setNumber(1, 4);
//    c1.printNumber();
//
//    c2.setNumber(5, 8);
//    c2.printNumber();
//
//    sum = sumComplex(c1, c2);
//    sum.printNumber();
//
//    return 0;
//}

//********CodeWithHarry summarizes the key characteristics of friend functions:
//
//Not in the class scope: A friend function is not a member of the class in which it is declared as a friend. Because it is not in the scope of the class, it cannot be called using the object of that class (e.g., c1.sumComplex() is invalid).
//
//Can be invoked without any object: It can be invoked like a normal function without needing an object dot-operator.
//
//Access permissions: Usually, it takes objects as arguments to access the private data members of the class.
//
//Placement: It can be declared inside either the public or private section of the class without affecting its behavior.
//
//No direct member access: It cannot access the members directly by their names; it must use object_name.member_name to access any class data member.











// ********* Tut # 27 *********
//Friend Classes & Member Friend Functions in C++

#include <iostream>
using namespace std;

// Forward declaration to let the compiler know that Complex class exists later
class Complex;

class Calculator {
public:
    int add(int a, int b) {
        return (a + b);
    }

    // Declaring individual member functions of Calculator as friends
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex {
    int a, b;

    // Individually declaring functions as friends
    // friend int Calculator :: sumRealComplex(Complex, Complex);
    // friend int Calculator :: sumCompComplex(Complex, Complex);

    // Aliter: Declaring the entire Calculator class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2) {
    return (o1.a + o2.a);
}

int Calculator :: sumCompComplex(Complex o1, Complex o2) {
    return (o1.b + o2.b);
}

int main() {
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of complex numbers is " << res << endl;

    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of complex numbers is " << resc << endl;

    return 0;
}



















