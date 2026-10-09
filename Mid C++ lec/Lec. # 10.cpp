//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int main () {
//	int a = 10, b = 2;
//	cout << a <<" is raised to the power " << b << " is = " << pow(a, b);
//	return 0;
//}



//#include<iostream>
//#include "myheader.h"
//using namespace std;
//
//int main () {
//	int num = 20;
//	cout << " The square of " << num << " is = " << mySquare (num);
//	return 0;
//}




#include<iostream>
using namespace std;
int mySquare(int*);
int main()
{
    int num = 10;
    cout << "The value of the num is : " << num << endl;
    cout << "The Square of the num is : " << mySquare(&num) << endl;
    cout << "The value of the num is : " << num << endl;
    return 0;
}

int mySquare(int* a)
{
	(*a)++;
    return ((*a) * (*a));
}

