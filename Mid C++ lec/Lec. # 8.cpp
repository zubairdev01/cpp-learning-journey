#include<iostream>
using namespace std;

int main () {
	
//int choice;
//cout << "Please enter a number from 1 to 5: ";
//cin >> choice;
//
//switch(choice) {
//case 1:
//cout << "You have entered value 1" << endl;
//break;
//
//case 2:
//cout << "You have entered value 2" << endl;
//break;
//
//case 3:
//cout << "You have entered value 3" << endl;
//break;
//
//case 4:
//cout << "You have entered value 4" << endl;
//break;
//
//case 5:
//cout << "You have entered value 5" << endl;
//break;
//
//default:
//cout << "Invalid input, please enter a number between 1 and 5" << endl;
//}
//return 0;



//for ( int counter = 1; counter <= 10; counter ++)
//{
//	if (counter %2 ==0) {
//		cout << counter <<",";
//	}
//	continue;
//	cout<< counter << ",";
//}
//return 0; 



// be carefull when using the "continue" statement with While loop

//int counter = 1;
//while ( counter <= 10 )
//{
//	if (counter %2 ==0) {
//		cout << counter <<",";
//	}
//	continue;
//	cout<< counter << ",";
//	counter ++;
//}
//return 0; 




//GOTO Statement

//    int choice;
//
//    cout << "Enter a number between 1 and 5: ";
//    cin >> choice;
//
//    if (choice <= 0 || choice > 5)
//    {
//        cout << "You have entered an invalid number!" << endl;
//        goto end;
//    }
//
//    switch (choice)
//    {
//        case 1:
//            cout << "You have entered 1." << endl;
//            break;
//        case 2:
//            cout << "You have entered 2." << endl;
//            break;
//        case 3:
//            cout << "You have entered 3." << endl;
//            break;
//        case 4:
//            cout << "You have entered 4." << endl;
//            break;
//        case 5:
//            cout << "You have entered 5." << endl;
//            break;
//    }
//
//    end:
//    cout << "Program has ended." << endl;
//    return 0;




    int basicSalary, fundAmount, netSalary;

    cout << "Please enter your Basic Salary: ";
    cin >> basicSalary;

    switch ( basicSalary/10000 )
    {
        case 0:
            fundAmount = 0;
            netSalary = basicSalary - fundAmount;
            cout << "Your Fund Deduction is : " << fundAmount << endl;
            cout << "Your Net Salary is : " << netSalary << endl;
            break;

        case 1:
            fundAmount = 1000;
            netSalary = basicSalary - fundAmount;
            cout << "Your Fund Deduction is : " << fundAmount << endl;
            cout << "Your Net Salary is : " << netSalary << endl;
            break;

        default:
            fundAmount = 0.07 * basicSalary;
            netSalary = basicSalary - fundAmount;
            cout << "Your Fund Deduction is : " << fundAmount << endl;
            cout << "Your Net Salary is : " << netSalary << endl;
            break;
    }

    return 0;

}
