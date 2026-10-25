//#include <iostream>
//using namespace std;
//
//int main() {
//    const int SUBJECTS = 3;
//    int total = 0;
//
//    for (int i = 1; i <= SUBJECTS; i++) {
//        int marks;
//        cout << "Enter marks for subject " << i << ": ";
//        cin >> marks;
//        total += marks;   // same as total = total + marks
//    }
//
//    cout << "Total: " << total << endl;
//    return 0;
//}





//#include <iostream>
//using namespace std;
//
//const int SUBJECTS = 5;   // change to the number of subjects you need
//
//int main() {
//    int total = 0;
//
//    for (int i = 1; i <= SUBJECTS; i++) {
//        int marks;
//        do {
//            cout << "Enter marks for subject " << i << " (0-100): ";
//            cin >> marks;
//        } while (marks < 0 || marks > 100);
//
//        total += marks;
//    }
//
//    float percentage = (float)total / (SUBJECTS * 100) * 100;
//
//    char grade;
//    if (percentage >= 80)      grade = 'A';
//    else if (percentage >= 65) grade = 'B';
//    else if (percentage >= 50) grade = 'C';
//    else                       grade = 'F';
//
//    cout << "Total: " << total << " / " << SUBJECTS * 100 << endl;
//    cout << "Percentage: " << percentage << "%" << endl;
//    cout << "Grade: " << grade << endl;
//
//    return 0;
//}
//




//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, sum = 0;
//    cout << "Enter N: ";
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        sum += i;
//    }
//    cout << "Sum = " << sum << endl;
//    return 0;
//}





//#include <iostream>
//using namespace std;
//
//int main() {
//    float a, b;
//    char op;
//    cout << "Enter: number operator number (e.g. 5 + 3): ";
//    cin >> a >> op >> b;
//
//    switch (op) {
//        case '+': cout << a + b << endl; break;
//        case '-': cout << a - b << endl; break;
//        case '*': cout << a * b << endl; break;
//        case '/':
//            if (b != 0) cout << a / b << endl;
//            else cout << "Cannot divide by zero" << endl;
//            break;
//        default:
//            cout << "Invalid operator" << endl;
//    }
//    return 0;
//}





//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    long long fact = 1;   // long long holds bigger numbers
//    cout << "Enter N: ";
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        fact *= i;
//    }
//    cout << n << "! = " << fact << endl;
//    return 0;
//}







//#include <iostream>
//using namespace std;
//
//int main() {
//    int units;
//    float bill;
//    cout << "Enter units consumed: ";
//    cin >> units;
//
//    if (units <= 100)
//        bill = units * 10;
//    else if (units <= 200)
//        bill = 100 * 10 + (units - 100) * 15;
//    else
//        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
//
//    cout << "Bill: " << bill << endl;
//    return 0;
//}







//#include <iostream>
//using namespace std;
//
//int main() {
//    const int SIZE = 5;
//    int marks[SIZE];
//
//    // Step 1: read and validate
//    for (int i = 0; i < SIZE; i++) {
//        do {
//            cout << "Marks for subject " << i + 1 << " (0-100): ";
//            cin >> marks[i];
//        } while (marks[i] < 0 || marks[i] > 100);
//    }
//
//    // Step 2: analyse
//    int total = 0, highest = marks[0], passTotal = 0, passCount = 0;
//    for (int i = 0; i < SIZE; i++) {
//        total += marks[i];
//        if (marks[i] > highest) highest = marks[i];
//        if (marks[i] < 50) continue;     // skip failed subjects
//        passTotal += marks[i];
//        passCount++;
//    }
//
//    // Step 3: report
//    int* p = marks;
//    cout << "\nYour marks: ";
//    for (int i = 0; i < SIZE; i++) cout << *(p + i) << " ";
//
//    cout << "\nTotal: " << total << endl;
//    cout << "Average: " << (float)total / SIZE << endl;
//    cout << "Highest: " << highest << endl;
//    cout << "Subjects passed: " << passCount << endl;
//    if (passCount > 0)
//        cout << "Average of passed: " << (float)passTotal / passCount << endl;
//    return 0;
//}











#include <iostream>
#include <iomanip>
using namespace std;

enum Dept { SALES, IT, HR };

struct Employee {
    int id;
    Dept dept;
    float salary;
};

int main() {
    const int N = 3;
    Employee staff[N];

    for (int i = 0; i < N; i++) {
        int d;
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID: ";
        cin >> staff[i].id;
        cout << "Department (0 = Sales, 1 = IT, 2 = HR): ";
        cin >> d;
        staff[i].dept = (Dept)d;          // typecast the number into an enum
        cout << "Salary: ";
        cin >> staff[i].salary;
    }

    float payroll = 0;
    cout << fixed << setprecision(0);
    cout << "\n--- Report ---" << endl;
    for (int i = 0; i < N; i++) {
        cout << "ID " << staff[i].id << " | ";
        switch (staff[i].dept) {
            case SALES: cout << "Sales"; break;
            case IT:    cout << "IT";    break;
            case HR:    cout << "HR";    break;
        }
        cout << " | " << staff[i].salary << endl;
        payroll += staff[i].salary;
    }
    cout << "Total payroll: " << payroll << endl;
    return 0;
}
