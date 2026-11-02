#include <iostream>
using namespace std;

//int main() {
//	double num1 , num2;
//	char op;
//	cout<<"Enter two numbers: ";
//	cin>>num1>>num2;
//	cout<<"Enter any operator (+,-,*,/): ";
//	cin>>op;
//	
//	switch(op) {
//		case '+':
//			cout<<"The answer is : "<<num1 + num2;
//			break;
//			
//		case '-':
//			cout<<"The answer is : "<<num1 - num2;
//			break;
//			
//		case '*':
//			cout<<"The answer is : "<<num1 * num2;
//			break;
//			
//		case '/':
//			if(num2 == 0)
//				cout<<"Error: division by zero is not allowed.";
//			else
//				cout<<"The answer is : "<<num1 / num2;
//			break;
//			
//		default:
//        cout << "Error : invalid operator" << endl;
//        break;
//    }
//
//    return 0;
//}








//int main () {
//	int num;
//	int reversed = 0, reminder;
//	
//	cout << "Enter a number: ";
//	cin>>num;
//	
//	while(num!=0) {
//		reminder = num % 10;
//		reversed = reversed * 10 + reminder;
//		num /= 10;
//	}
//	cout << "Reversed Number = " << reversed;
//	return 0;
//}







//int main () {
//	int  arr[5];
//	
//	cout << "Enter 5 integers: ";
//	for (int i=0; i<5; i++) {
//		cin >> arr[i];
//	}
//	
//	int smallest = arr[0];
//	
//	for(int i=1; i<5; i++) {
//		if(arr[i] < smallest ) {
//			smallest = arr[i];
//		}
//}
//	cout<< "The smallest elements: " << smallest;
// return 0;
//}








//Level 4: Create a Book struct (id, price, pages), store one book, and print its details.

//struct Book {
//	int id ;
//	double price;
//	int pages;
//	
//};
//
//int main () {
//	Book b1;
//	
//	cout << "Enter the Book ID ";
//	cin >> b1.id ;
//	
//	cout << "Enter the Book price ";
//	cin >> b1.price;
//	
//	cout << "Enter the number of pages ";
//	cin >> b1.pages;
//	
//	cout << "**** Book Details ****";
//	cout << "ID: " << b1.id << endl;
//	cout << "Price: " << b1.price <<endl;
//	cout << "Pages : " << b1.pages << endl;
//	
//	return  0;
//}






//Level 5: Write a function with a default argument that calculates simple interest at a default rate of 5%. Call it once with the default and once with a custom rate.


//double simpleInterest (double principal, double time, double rate = 5.0) {
//	return (principal * rate * time) / 100;
//	
//}
//int main() {
//	double p = 10000, t = 2;
//	cout << "Interest at default rate : " << simpleInterest(p,t) << endl;
//	cout << "Interest at 8% " << simpleInterest(p, t , 8) << endl;
//	
//	return 0;
//}







//----------------------------------------------------------

// Write a recursive function printDown(int n) that prints n down to 1. For example, 5 prints 5 4 3 2 1.

//void printDown(int n) {
//	if(n<=0) {
//		return ;
//	}
//	cout << n << " ";
//	printDown(n-1);
//}
//
//int main(){
//	printDown (5);
//	return 0;
//}






//Overload a function square for int and double, then call it with 4 and 2.5.

//int square(int n) {
//	return n * n;
//}
//double square (double n) {
//	return n * n;
//}
//
//int main() {
//	cout << square(4) << endl;
//	cout << square(2.5) <<endl;
//	return 0;
//}






//Write a recursive power(int base, int exp) with a default exponent of 2. Test power(3) and power(2, 5).

int power(int base, int exp = 2 ) {
	if (exp == 0) {
		return 1;
	}
	return base * power(base, exp - 1);
}

int main() {
	cout << power(3);
	cout << power(2,5);
	return 0;
}







//Convert a decimal number to binary using recursion. For example, 10 prints 1010. Hint: print the result of n / 2 first, then n % 2.

//void decimalToBinary(int n) {
//	if (n>1) {
//		decimalToBinary(n/2);
//	}
//	cout<< n%2;
//};
//
//int main() {
//	int num;
//	cout << "Enter a decimal number";
//	cin >> num;
//	
//	decimalToBinary(num);
//	return 0;
//}







////Tower of Hanoi. Print the moves needed to shift n disks from rod A to rod C using rod B. Hint: move n-1 disks away, move the largest one, then move the n-1 disks back on top.
//
//void towerOfHanoi(int n, char source, char auxiliary, char destination) {
//	
//}
//
//int main() {
//	int n;
//	cout << "Enter the number of disks: ";
//	cin >> n;
//	
//	towerOfHanoi(n, 'A', 'B', 'C');
//	return 0;
//}











