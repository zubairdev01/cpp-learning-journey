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

#include <iostream>
using namespace std;

class Shop {
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop :: setPrice(void) {
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void) {
    for (int i = 0; i < counter; i++) {
        cout << "The Price of item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main() {
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}














// ********* Tut # 22 *********
// ********* Tut # 22 *********
// ********* Tut # 22 *********
// ********* Tut # 22 *********

