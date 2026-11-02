//#include <iostream>
//using namespace std;
//
//int main() {
//    int choice;
//
//    do {
//        cout << "\n===== MATH TOOLKIT =====" << endl;
//        cout << "1. Table of a number" << endl;
//        cout << "2. Sum of 1 to N" << endl;
//        cout << "3. Factorial of N" << endl;
//        cout << "4. Exit" << endl;
//        cout << "Choice: ";
//        cin >> choice;
//
//        switch (choice) {
//            case 1: {
//                int n;
//                cout << "Enter a number: ";
//                cin >> n;
//                for (int i = 1; i <= 10; i++) {
//                    cout << n << " x " << i << " = " << n * i << endl;
//                }
//                break;
//            }
//            case 2: {
//                int n, sum = 0;
//                cout << "Enter a number: ";
//                cin >> n;
//                for (int i = 1; i <= n; i++) {
//                    sum += i;
//                }
//                cout << "Sum = " << sum << endl;
//                break;
//            }
//            case 3: {
//                int n;
//                long long fact = 1;
//                cout << "Enter a number: ";
//                cin >> n;
//                for (int i = 1; i <= n; i++) {
//                    fact *= i;
//                }
//                cout << n << "! = " << fact << endl;
//                break;
//            }
//            case 4:
//                cout << "Goodbye!" << endl;
//                break;
//            default:
//                cout << "Invalid choice, try again" << endl;
//        }
//    } while (choice != 4);
//
//    return 0;
//}










//#include <iostream>
//using namespace std;
//
//bool isPrime(int n) {
//    if (n < 2) return false;
//
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0)
//            return false;
//    }
//
//    return true;
//}
//
//void primesUpTo() {
//    int n;
//    cout << "Enter N: ";
//    cin >> n;
//
//    for (int i = 2; i <= n; i++) {
//        if (isPrime(i))
//            cout << i << " ";
//    }
//
//    cout << endl;
//}
//
//int main() {
//    primesUpTo();
//    return 0;
//}











//#include <iostream>
//#include <utility>
//using namespace std;
//
//void swapPtr(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void bubbleSort(int* arr, int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                swapPtr(&arr[j], &arr[j + 1]);
//            }
//        }
//    }
//}
//
//void sortDemo() {
//    int arr[6] = {64, 25, 12, 22, 11, 90};
//
//    bubbleSort(arr, 6);
//
//    for (int i = 0; i < 6; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    sortDemo();
//    return 0;
//}







#include<iostream>
using namespace std;

//int sumTo(int n) {
//    if (n <= 0) return 0;        // base condition stops the recursion
//    return n + sumTo(n - 1);     // sumTo(4) = 4 + 3 + 2 + 1 + 0
//}
//int main () {
//	cout << sumTo(4);
//	return 0;
//}





//long long factorial(int n) {
//    if (n <= 1) return 1;
//    return n * factorial(n - 1);
//}
//int main() {
//	cout << factorial(4);
//	return 0;
//}







//#include <iostream>
//#include <cmath>
//using namespace std;
//
//// Circle area
//double area(double radius) {
//    return 3.14159 * radius * radius;
//}
//
//// Rectangle area
//double area(double length, double width) {
//    return length * width;
//}
//
//// Triangle area using Heron's formula
//double area(double a, double b, double c) {
//    double s = (a + b + c) / 2.0;
//    double x = s * (s - a) * (s - b) * (s - c);
//
//    return sqrt(x);
//}
//
//int main() {
//    cout << "Circle area: " << area(3.0) << endl;
//
//    cout << "Rectangle area: "
//         << area(4.0, 5.0) << endl;
//
//    cout << "Triangle area: "
//         << area(3.0, 4.0, 5.0) << endl;
//
//    return 0;
//}













#include <iostream>
using namespace std;

// Sum from 1 to n
int sumTo(int n) {
    if (n <= 0) return 0;
    return n + sumTo(n - 1);
}

// Factorial
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Fibonacci sequence
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

// Power with default exponent 2
long long power(int base, int exponent = 2) {
    if (exponent == 0) return 1;
    return base * power(base, exponent - 1);
}

// Greatest Common Divisor
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    cout << "1. sumTo(5) = "
         << sumTo(5) << endl;

    cout << "2. factorial(5) = "
         << factorial(5) << endl;

    cout << "3. Fibonacci: ";
    for (int i = 0; i < 8; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;

    cout << "4. power(5) = "
         << power(5) << endl;

    cout << "5. power(2, 10) = "
         << power(2, 10) << endl;

    cout << "6. gcd(48, 18) = "
         << gcd(48, 18) << endl;

    return 0;
}

