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
//
//class Time {
//	private:
//		int hours, minutes, seconds;
//	public:
//		void setTime(int h, int m, int s);
//		void addSeconds(int s);
//		void show();
//		
//};
//
//
//void Time :: setTime(int h, int m, int s) {
//	if (h >= 0 && h <= 23  &&  m >= 0 && m <= 59  &&  s >= 0 && s <= 59) {
//		hours = h;
//		minutes = m;
//		seconds = s;
//	}else {
//		cout << "Error: Invalid time ( " << h << ":" << m << ":" << s << ") , not stored." << endl;
//	}	
//}
//
//
//void Time :: addSeconds(int s) {
//	int total = (hours * 3600) + (minutes * 60) + seconds;
//	total += s;
//	
//	seconds = total % 60;
//	minutes = (total / 60) % 60;
//	hours = (total / 3600) % 24;
//}
//
//void Time :: show() {
//	cout << hours << minutes << seconds << endl;
//}
//
//
//int main() {
//	Time t;
//	
//	t.setTime(0,59,50);
//	t.show();
//	
//	t.addSeconds(20);
//	t.show();
//	
//	t.setTime(25,70,10);
//	t.show();
//	
//	return 0;
//}








//Level 5 (hard): Create a MarksCard class with a private array of 5 marks. Add setMarks(), average(), highest(), and countPassed() (marks of 50 or more).









// -------------------------------------------------------------------------------

//Level 1: Create a Rectangle class with setData(l, w) and area(). Make a static member that counts how many rectangles were created, and print it with a static method.

//class Rectangle {
//	private:
//		double length, width;
//		static int count;
//		
//	public:
//		void setData(double l, double w) {
//			cout << "Enter the value of length " << l << endl;
//			cin >> l;
//			cout << "Enetr the value of width " << w << endl;
//			cin >> w;
//			
//			length = l;
//			width = w;
//			count ++ ;
//		}
//		
//		void getData() {
//			cout << "The lenght of the Rectangular is " << length << " and the width is " << width << endl;
//			
//		}
//		double area () {
//			return length * width;
//		}
//		static void getCount() {
//			cout << "The total number of rectangular is " << count << endl;
//		}
//};
//int Rectangle :: count =0;
//
//int main() {
//	Rectangle r1,r2,r3;
//	
//	r1.setData(0,0);
//	r2.setData(0,0);
//	r3.setData(0,0);
//	
//	cout << "\nRectangle 1:" << endl;
//    r1.getData();
//    cout << "Area: " << r1.area() << endl;
//
//    cout << "\nRectangle 2:" << endl;
//    r2.getData();
//    cout << "Area: " << r2.area() << endl;
//
//    cout << "\nRectangle 3:" << endl;
//    r3.getData();
//    cout << "Area: " << r3.area() << endl;
//
//    Rectangle::getCount();
//    
//	return 0;
//}










//Level 2: Build a Marks class holding an int marks[5] array. Add setMarks() (use cin), average() and highest().

//Level 3: Create a Point class (x, y). Write setByMidpoint(Point p1, Point p2). Then make an array of 3 Point objects and print the midpoint of the first two.

class Point {
	private:
		double x,y;
	public:
		void setPoint(double a, double b) {
			x = a;
			y = b;
		}
		void setByMidPoint(Point p1, Point p2) {
			x = (p1.x + p2.x) / 2;
			y = (p1.y + p2.y) / 2;
		}
		
		void display () {
			cout << "The midpoint of x is " << x 
				 << "and the midpoint of y is " << y << endl;
		}
};

int main() {
	Point points[3];
	
	points[0].setPoint(2,4);
	points[1].setPoint(6,8);
	
	points[2].setByMidPoint(points[0], points[1]);
	
	points[2].display();
	return 0;
	
}











//Level 4 (hard): Build a Library class with arrays of book IDs and an issued[100] flag array. Support addBook(), issueBook(id), returnBook(id), and a static counter of currently issued books. Reject invalid operations (an unknown ID, or issuing a book twice).
//
//Level 5 (challenge): Create a Matrix class that stores a 2×2 int m[2][2]. Write setByAdd(Matrix a, Matrix b) and setByMultiply(Matrix a, Matrix b). Keep a static counter of operations performed. Test it with an array of three matrices and print every result.


















