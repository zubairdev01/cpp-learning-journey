//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main() {
// int salary[5] = {1000, 1500, 20000, 30000, 60000};
// cout << setfill('x');
// for (int i = 0; i < 5; i++)
// cout << setw(10) << salary[i] << endl;
// return 0;
//}

#include <iostream>
using namespace std;

class Matrix {
private:
    int numRows;
    int numCols;
    double **elements;

public:
    Matrix(int row, int col);
};

