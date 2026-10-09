#include<iostream>
using namespace std;

int main () {
//	In the program to calculate the sum of the first 100 numbers, why is the counter variable updated by counter = counter + 1 inside the while loop?
	
//	int sum, counter;
//	sum = 0;
//	counter = 1;
//	
//	while ( counter <= 100 ) {
//		sum = sum + counter;
//		counter = counter + 1;
//	}
//	cout << "The sum of first 100 number is = ";
//	cout << sum;
//	
//	return 0;


// In the program designed to calculate the sum of the first 100 even numbers, what is the specific purpose of the condition if (counter % 2 == 0) placed inside the while loop?
	
//	int sum, counter;
//	sum = 0;
//	counter = 1;
//	
//	while ( counter <= 100 ) {
//		
//		if (counter % 2 == 0) {
//			sum = sum + counter;
//		}
//		counter = counter + 1;
//	}
//	
//	cout << "The sum of first 100 Even number is = ";
//	cout << sum;
//	
//	return 0;



// Write a program in C++ that will calculate the factorial of a given number and print it on the screen.
// Factorial of a given number  n = n(n-1)(n-2)...1

	int number, factorial;
	number = 5;
	factorial = 1;
	
	while ( number >= 1) 
	{
		factorial = factorial * number;
		number = number - 1;
	}
	cout << "The factorial of number 5 is = ";
	cout << factorial;
	
	return 0;




}
