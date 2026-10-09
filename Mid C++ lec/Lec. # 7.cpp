#include<iostream>
using namespace std;

int main () {
//	char choice;
//	int noTries;
//	noTries = 0;
//	
//	do {
//		cout <<"Please guess the character from a - z : ";
//		cin>> choice;
//		
//		if  (choice == 'z') {
//			cout << "Wow! You have guessed the character, Congratulations!";
//		} 
//		
//		else {
//			noTries = noTries + 1;
//			cout << "Oops! You couldn't guess it, please give it another try.";
//			cout<< endl;
//		}
//		
//	}  while (choice != 'z' && noTries <= 5);
//	
//	return 0;




//	int number;
//	cout << "Please enter a number : ";
//	cin >> number;
//	
//	for ( int counter = 1; counter <= 20; counter = counter + 1)
//	{
//		cout << number <<"x" << counter << "=" << number* counter << endl;
//	}
//	return 0;
 
 
 
 
 	int number, sum;
	
	cout << "Please enter a number : ";
	cin >> number;
	
	for ( int counter = 1; counter <= number; counter ++)
	{
		sum = sum + (counter * counter);
	} 
	cout << "The sum of the squares of the numbers from 1 till "<< number << " is =" << sum <<endl;
	
	return 0;
}
