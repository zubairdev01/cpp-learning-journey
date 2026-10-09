// Topic: Function Prototype
//9.1 Function
//9.2 Tyoes of function
//9.3 Syntax of a  function
//9.4 Return type and Parameters
//9.5 Calling a Function

#include<iostream>
using namespace std;
//void printMessege(void);
//int main () 
//{
//	cout<< "We are calling our function here." << endl;
//	printMessege();
//	return 0;
//}
//void printMessege(void)
//{
//	cout << "This statement is printed by our defined function." <<endl;
//	cout << "This statement is appended to our first line." <<endl;
//}



#include<iostream>
using namespace std;
//void calculateSquare(int);
//int main()
//{
//	int number;
//	cout<<"Please enter a number : ";
//	cin>>number;
//	
//	calculateSquare(number);
//	return 0;
//}
//void calculateSquare(int a) {
//	cout << "The square of the given number is : "<< a * a << endl;
//}



#include<iostream>
using namespace std;
int sumNumbers (int, int);
int main()
{
	int num1, num2, result;
	cout<<"Please enter number 1 : ";
	cin>>num1;
	
	cout<<"Please enter number 2 : ";
	cin>>num2;
	
	result = sumNumbers (num1, num2);
	cout << "The sum of the given number is : " << result << endl;
	
	return 0; 
}
int sumNumbers (int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}


//Based on the provided video, which covers **Lecture 9 Part 1**, the content focuses on the foundational concepts of **Functions in C++**. The lecture does not explicitly label a section as "9.5," but it provides a comprehensive overview of the theoretical aspects of functions. Here is the summary of the concepts discussed:
//
//*   **What is a Function:** A function is a sub-task or sub-routine designed to perform a specific operation, promoting **code reusability** (1:38 - 3:52).
//*   **Types of Functions:** 
//    *   Functions that **return a value** (e.g., calculations) (4:02 - 4:43).
//    *   Functions that **do not return a value** (often used for displaying output), identified by the `void` keyword (4:45 - 4:58, 6:44 - 6:58).
//*   **Function Syntax:** Includes the return type, function name, and parameters inside parentheses, followed by the function body within curly braces (5:00 - 6:06).
//*   **Parameters:** Inputs provided to the function to perform specific operations (e.g., salary for tax calculation or ID for checking results) (7:01 - 9:19).
//*   **Calling a Function:** Invoking a function by its name and passing the necessary arguments to execute the logic defined in the body (9:20 - 12:29).
//*   **Declaration vs. Definition:**
//    *   **Declaration (Prototype):** A one-line statement (ending with a semicolon) informing the compiler about the function's name, return type, and parameters, typically placed before the `main` function (12:30 - 13:48).
//    *   **Definition:** The actual implementation of the function containing the logic and processing code (13:50 - 14:58).
