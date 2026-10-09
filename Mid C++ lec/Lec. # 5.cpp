#include<iostream>
using namespace std;


//int main() {
//	int age = 21;
//	
//	if( age >= 18) {
//		cout << "Congratulations, You are eligible to attend this test,";
//		cout << endl;
//	}	
//	cout << "Thank you for contacting us.";
//	
//	return 0;
//}



int main()
{
    double amount, discount, netPayable;

    // Input bill amount
    cout << "Enter bill amount: ";
    cin >> amount;

    // Check discount condition
    if (amount > 5000)
    {
        discount = amount * 0.15;   // 15% discount
    }
    else
    {
        discount = amount * 0.10;   // 10% discount
    }

    // Calculate payable amount
    netPayable = amount - discount;

    // Display results
    cout << "Discount: " << discount << endl;
    cout << "Net Payable Amount: " << netPayable;

    return 0;
}

//int main()
//{
//    int AmerAge, AmaraAge;
//
//    // Input ages
//    cout << "Enter Amer's age: ";
//    cin >> AmerAge;
//
//    cout << "Enter Amara's age: ";
//    cin >> AmaraAge;
//
//    // Compare ages
//    if (AmerAge > AmaraAge)
//    {
//        cout << "Amer is older than Amara";
//    }
//
//    if (AmerAge < AmaraAge)
//    {
//        cout << "Amer is younger than Amara";
//    }
//
//    return 0;
//}

//int main() {
//	float billAmount, discount, netAmount;
//	billAmount = 6480;
//	
//	if (billAmount > 5000) {
//		discount = 0.15 * billAmount;
//		netAmount = billAmount - discount;
//		
//		cout << "Your Discount Amount is : ";
//		cout << discount;
//		cout << endl;
//		
//		cout << "Your net Amount is : ";
//		cout << netAmount;
//		cout << endl;
//	}
//	
//	else {
//		discount = 0.10 * billAmount;
//		netAmount = billAmount - discount;
//		
//		cout << "Your Discount Amount is : ";
//		cout << discount;
//		cout << endl;
//		
//		cout << "Your net Amount is : ";
//		cout << netAmount;
//		cout << endl;
//	}
//	
//	return 0;
//}


//int main() {
//int average_marks;
//
//cout << "Please enter your average marks: ";
//cin >> average_marks;
//
//if (average_marks > 90 && average_marks <= 100) {
//cout << "Grade A" << endl;
//} 
//else if (average_marks > 80 && average_marks <= 90) {
//cout << "Grade B" << endl;
//} 
//else if (average_marks > 70 && average_marks <= 80) {
//cout << "Grade C" << endl;
//} 
//else if (average_marks > 60 && average_marks <= 70) {
//cout << "Grade D" << endl;
//} 
//else if (average_marks >= 50 && average_marks <= 60) {
//cout << "Grade E" << endl;
//} 
//else {
//// Handles cases less than 50
//cout << "Grade F - Fail" << endl;
//}
//
//return 0;
//}
