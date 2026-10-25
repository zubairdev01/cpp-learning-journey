#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n===== MATH TOOLKIT =====" << endl;
        cout << "1. Table of a number" << endl;
        cout << "2. Sum of 1 to N" << endl;
        cout << "3. Factorial of N" << endl;
        cout << "4. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int n;
                cout << "Enter a number: ";
                cin >> n;
                for (int i = 1; i <= 10; i++) {
                    cout << n << " x " << i << " = " << n * i << endl;
                }
                break;
            }
            case 2: {
                int n, sum = 0;
                cout << "Enter a number: ";
                cin >> n;
                for (int i = 1; i <= n; i++) {
                    sum += i;
                }
                cout << "Sum = " << sum << endl;
                break;
            }
            case 3: {
                int n;
                long long fact = 1;
                cout << "Enter a number: ";
                cin >> n;
                for (int i = 1; i <= n; i++) {
                    fact *= i;
                }
                cout << n << "! = " << fact << endl;
                break;
            }
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice, try again" << endl;
        }
    } while (choice != 4);

    return 0;
}
