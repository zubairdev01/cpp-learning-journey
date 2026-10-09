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



#include <iostream>
using namespace std;

const int SUBJECTS = 5;   // change to the number of subjects you need

int main() {
    int total = 0;

    for (int i = 1; i <= SUBJECTS; i++) {
        int marks;
        do {
            cout << "Enter marks for subject " << i << " (0-100): ";
            cin >> marks;
        } while (marks < 0 || marks > 100);

        total += marks;
    }

    float percentage = (float)total / (SUBJECTS * 100) * 100;

    char grade;
    if (percentage >= 80)      grade = 'A';
    else if (percentage >= 65) grade = 'B';
    else if (percentage >= 50) grade = 'C';
    else                       grade = 'F';

    cout << "Total: " << total << " / " << SUBJECTS * 100 << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}







