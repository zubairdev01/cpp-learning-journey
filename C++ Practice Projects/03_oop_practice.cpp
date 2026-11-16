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
//#include <iostream>
//using namespace std;
//
//class BankAccount {
//    private:
//        double balance;
//    public:
//        void open(double initial) { balance = initial; }
//        void deposit(double amount) { if (amount > 0) balance += amount; }
//        bool withdraw(double amount) {
//            if (amount > 0 && amount <= balance) {
//                balance -= amount;
//                return true;
//            }
//            return false;                // refuse an overdraft
//        }
//        double getBalance() { return balance; }
//};
//
//int main() {
//    BankAccount acc;
//    double initial, dep, wd;
//
//    cout << "Enter opening balance:" << endl;
//    cin >> initial;
//    acc.open(initial);
//
//    cout << "Enter amount to deposit:" << endl;
//    cin >> dep;
//    acc.deposit(dep);
//    cout << "Balance after deposit = " << acc.getBalance() << endl;
//
//    cout << "Enter amount to withdraw:" << endl;
//    cin >> wd;
//    if (acc.withdraw(wd)) cout << "Withdraw successful" << endl;
//    else                  cout << "Withdraw refused (insufficient funds)" << endl;
//    cout << "Final balance = " << acc.getBalance() << endl;
//    return 0;
//}












// ---------- Program 5 (Advanced): Fraction with defaults + friend ----------
// One constructor with default arguments replaces three overloads.
// WARNING: do not also write Fraction() or Fraction(int); calls would be ambiguous.
class Fraction {
    int num, den;

    static int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
    friend Fraction addFractions(Fraction, Fraction);

public:
    Fraction(int n = 0, int d = 1) {        // Fraction(), Fraction(3), Fraction(3, 4)
        if (d == 0) {                       // guard against division by zero
            cout << "Denominator cannot be 0, using 1" << endl;
            d = 1;
        }
        int g = gcd(abs(n), abs(d));
        if (g == 0) g = 1;                  // happens for 0/d
        num = n / g;
        den = d / g;
    }
    void print() { cout << num << "/" << den << endl; }
};

Fraction addFractions(Fraction f1, Fraction f2) {
    return Fraction(f1.num * f2.den + f2.num * f1.den, f1.den * f2.den);
}

void program5() {
    cout << "--- Program 5: Fraction ---" << endl;
    Fraction a;                             // 0/1
    Fraction b(3);                          // 3/1
    Fraction c(2, 4);                       // reduced to 1/2
    Fraction d(1, 3);
    Fraction e(5, 0);                       // guarded
    cout << "a = "; a.print();
    cout << "b = "; b.print();
    cout << "c = "; c.print();
    cout << "c + d = "; addFractions(c, d).print();
    cout << "e = "; e.print();
}

int main() {
    program1();
    program2();
    program3();
    program4();
    program5();
    return 0;
}
