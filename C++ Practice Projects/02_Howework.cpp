#include<iostream>
#include<string>
using namespace std;
//Level 1: Create a Book class with private pages and price, and public setData() and show(). Try b.pages = 10; in main and read the compiler error.

//class Book {
//	private:
//		int pages, price;
//	public:
//		void setData(int pg, int pr) { pages = pg; price = pr;}
//		void show() {
//			cout << "Pages = " << pages << endl;
//			cout << "Price = " << price << endl;
//		}
//};
//int main() {
//	
//	Book b;
//	b.setData(200, 450);
//	b.show();
//	
//	return 0;
//}











//Level 2: Create a Circle class with a private radius. Declare area() and circumference() inside the class, but define them outside with ::.
//const double pi = 3.1415;
//
//class Circle {
//	private: 
//		double radius;
//	public:
//		void setData(double r);
//		double area() ;
//		double circumference();
//};
//
//void Circle :: setData(double r) { radius = r; }
//double Circle :: area() { return pi * radius * radius;}
//double Circle :: circumference() { return 2 * pi * radius; }
//
//
//int main() {
//	Circle c;
//	c.setData(5);
//	
//	cout << "Area = " << c.area() << endl;
//	cout << "Circumference = " << c.circumference() << endl; 
//	
//	return 0;
//}









//Level 3: Create a Student class where setId() rejects negative values. Add a getId() function and test it with one valid and one invalid value.

//class Student {
//	private:
//		int id;
//	public:
//		void setId(int i);
//		int getId();
//};
//
//		void Student :: setId (int i) {
//			if (i < 0){
//				cout << "Error: " << i << " is negative, so it was not stored." << endl;
//				
//			}else {
//				id  = 1;
//				cout << "ID" << i << " is stored." << endl;	
//			}
//		}
//		
//		int Student :: getId () {
//		return id; }
//
//
//int main() {
//	Student s;
//	s.setId(101);
//	cout << "Current ID " << s.getId() << endl;
//	
//	s.setId(-5);
//	cout << "Current ID " << s.getId() << endl;
//	
//	return 0;
//}









//Level 4 (hard): Create a Time class with private hours, minutes, and seconds. 
// setTime() must validate each value, and addSeconds(int s) must roll overflow 
// into minutes and hours (for example, 59 min 50 sec plus 20 sec gives 1 hr 0 min 10 sec).

class Time {
	private:
		int hours, minutes, seconds;
	public:
		void setTime(int h, int m, int s);
		void addSeconds(int s);
		void show();
		
};




void Time :: setTime(int h, int m, int s) {
	if (h >= 0 && h <= 23  &&  m >= 0 && m <= 59  &&  s >= 0 && s <= 59) {
		hours = h;
		minutes = m;
		seconds = s;
	}else {
		cout << "Error: Invalid time ( " << h << ":" << m << ":" << s << ") , not stored." << endl;
	}	
}


void Time :: addSeconds(int s) {
	int total = (hours * 3600) + (minutes * 60) + seconds;
	total += s;
	
	seconds = total % 60;
	minutes = (total / 60) % 60;
	hours = (total / 3600) % 24;
}

void Time :: show() {
	cout << hours << minutes << seconds << endl;
}


int main() {
	Time t;
	
	t.setTime(0,59,50);
	t.show();
	
	t.addSeconds(20);
	t.show();
	
	t.setTime(25,70,10);
	t.show();
	
	return 0;
}















//Level 5 (hard): Create a MarksCard class with a private array of 5 marks. Add setMarks(), average(), highest(), and countPassed() (marks of 50 or more).

