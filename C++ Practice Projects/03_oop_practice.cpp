// Solved practice: Tut 21-22 (classes, objects, private/public, member functions, string)
//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Rectangle {
//    private:
//        int length, width;               // hidden from outside
//    public:
//        void setData(int l, int w) { length = l; width = w; }
//        int area() { return length * width; }
//        int perimeter() { return 2 * (length + width); }
//};
//
//int main() {
//    int l, w;
//    cout << "Enter length and width:" << endl;
//    cin >> l >> w;
// 
//    Rectangle r;                         // create an object
//    r.setData(l, w);                     // the only way to fill private data
//    // r.length = 10;                    // ERROR: length is private
// 
//    cout << "Area = " << r.area() << endl;
//    cout << "Perimeter = " << r.perimeter() << endl;
//    return 0;
//}














// Program 3: BankAccount with validated deposit and withdraw
#include <iostream>
using namespace std;

class BankAccount {
    private:
        double balance;
    public:
        void open(double initial) { balance = initial; }
        void deposit(double amount) { if (amount > 0) balance += amount; }
        bool withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                return true;
            }
            return false;                // refuse an overdraft
        }
        double getBalance() { return balance; }
};

int main() {
    BankAccount acc;
    double initial, dep, wd;

    cout << "Enter opening balance:" << endl;
    cin >> initial;
    acc.open(initial);

    cout << "Enter amount to deposit:" << endl;
    cin >> dep;
    acc.deposit(dep);
    cout << "Balance after deposit = " << acc.getBalance() << endl;

    cout << "Enter amount to withdraw:" << endl;
    cin >> wd;
    if (acc.withdraw(wd)) cout << "Withdraw successful" << endl;
    else                  cout << "Withdraw refused (insufficient funds)" << endl;
    cout << "Final balance = " << acc.getBalance() << endl;
    return 0;
}
