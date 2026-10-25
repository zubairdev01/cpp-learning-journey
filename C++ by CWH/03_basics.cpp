//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {         // Data Type and challanges
//    string userTea;
//    int teaCups;
//
//    cout << "Enter your favorite tea: ";
//    getline(cin, userTea);
//
//    cout << "How many cups would you like? ";
//    cin >> teaCups;
//
//    cout << "You want " << teaCups << " cups of " << userTea << "." << endl;
//    
//    
//    
//    int basePrice = 100;
//    float increaseRate = 0.10f; // 10% increase
//    
//    // Explicit type casting
//    double finalPrice = basePrice + (basePrice * increaseRate);
//    
//    cout << "New Price: " << (int)finalPrice << endl;
//	return 0;
//}







// Operators and challenges in cpp


//#include <iostream>
//using namespace std;
//
//int main() {
//    int cups;
//    double pricePerCup = 2.5;
//    double discount = 0.0;
//
//    cout << "Enter the number of tea cups: ";
//    cin >> cups;
//
//    if (cups > 20) {
//        discount = 0.20; // 20% discount
//    } else if (cups >= 10 && cups <= 20) {
//        discount = 0.10; // 10% discount
//    } else {
//        discount = 0.0;  // No discount
//    }
//
//    double totalPrice = (cups * pricePerCup);
//    totalPrice -= (totalPrice * discount);
//
//    cout << "Total price after discount is: " << totalPrice << endl;
//
//    return 0;
//}





//#include<iostream>
//using namespace std;
//int main() {
//	int choice;
//	double price = 0.0;
//	
//	cout<<"Select you tea type: /n";
//	cout<<"Lemon tea/n";
//	cout<<"Green Tea/n";
//	cout<<"Simple elachi tea/n";
//	cout<<"ENter your choice in numbers: ";
//	cin>>choice;
//	
//	switch (choice) {
//		case 1:
//			price = 2.0;
//			cout<<"You select Lemon tea : Price: $" << price << endl;
//			break;
//			
//			case 2:
//			price = 3.0;
//			cout<<"You select green tea : Price: $" << price << endl;
//			break;
//			
//			case 3:
//			price = 2.0;
//			cout<<"You select Simple Elachi tea : Price: $" << price << endl;
//			break;
//			
//			default:
//				cout<< "Invalid Choice" << endl;
//	}
//	return 0;
//}







//#include <iostream>
//using namespace std;
//
//int main() {
//string teaTypes[] = {"Oolong tea", "Orange tea", "Green tea", "Black tea", "Lemon tea"};
//for (int i = 0; i < 5; i++) {
//if (teaTypes[i] == "Green tea") {
//cout << "Skips " << teaTypes[i] << endl;
//continue;
//}
//cout << "Brewing " << teaTypes[i] << "..." << endl;
//}
//return 0;
//}






//Functions in C++
//Function Patameter Def and Dec
//#include <iostream>
//using namespace std;
//
//int checkTemperature(int temperature);
//return temperature;
//
//// Function Decleration
//void serveChai(int cups);
//
//void makeChai() {
//	cout << "Boiling water, adding tea leaves, straining."
//}
//
//void serveChai(string teaType = "Masala Tea) {    // thats called function overloading and differntiate on the behafe of the parameter you passed 
//	int cups = 4;
//	cout << "Serving " << teaType << endl;
//}
//
//
//int main() {
//	let temp = checkTemperature(50);
////	cout<<temp;
////	makeChai();  // calling a function
////	serveChai(3);
//
//	serveChai("Lemon tea");
//	return 0;
//} 
//// Function Defination
//void serveChai(int cups) {
//	cout<<"Serving " << cups << " of chai; ";
//}




//Pass by value  &  Pass by Ref
#include <iostream>
using namespace std;

// void pourChai(int &cups) {  // call by ref

//void pourChai(int cups) {
//	cups = cups + 5;
//	cout << "Poured cups: " << cups << endl;
//}
int main() {
//	int cups = 2; 
//	pourChai(cups);
//	cout<<"Total cups are " << cups << endl;

//	lamda
	auto preparedChai = [](int cups) {
		cout << "Preparing " << cups << " cups of tea" << endl;
	};
	preparedChai(4);
	return 0;
}









