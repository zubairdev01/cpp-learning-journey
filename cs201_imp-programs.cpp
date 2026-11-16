// =====================================================================
//  CS201 - 20 Solved Programs (modern C++)
//  Compile:  g++ -std=c++11 cs201_solved_programs.cpp -o cs201
//  Run:      ./cs201      then choose a program number (0 to quit)
//  Each program has: PROBLEM, LOGIC, and the solution.
// =====================================================================
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

// ---------- small helpers shared by several programs -----------------
void readArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "  element " << i + 1 << ": ";
        cin >> a[i];
    }
}
void printArray(const int a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";
}

// =====================================================================
// 1. Average age of 10 students
// LOGIC: accumulate a total in a loop. Divide by 10.0 (not 10),
//        otherwise integer division drops the decimal part.
// =====================================================================
void p1() {
    int age, total = 0;
    for (int i = 1; i <= 10; i++) {
        cout << "Age of student " << i << ": ";
        cin >> age;
        total += age;
    }
    double average = total / 10.0;
    cout << "Average age = " << average << "\n";
}

// =====================================================================
// 2. Tax deduction by salary slab
// LOGIC: if / else-if ladder. Test from the lowest slab upward; the
//        first true condition wins, so later tests need no lower bound.
// =====================================================================
double taxRate(double salary) {
    if (salary <= 5000)  return 0.0;
    else if (salary <= 10000) return 0.05;
    else if (salary <= 20000) return 0.10;
    else                      return 0.15;
}
double netSalary(double gross) { return gross - gross * taxRate(gross); }

void p2() {
    double salary;
    cout << "Gross salary: ";
    cin >> salary;
    cout << "Tax rate   = " << taxRate(salary) * 100 << "%\n";
    cout << "Net salary = " << netSalary(salary) << "\n";
}

// =====================================================================
// 3. Factorial
// LOGIC: running product (accumulator starting at 1) inside a loop.
//        unsigned long long holds up to 20!.
// =====================================================================
void p3() {
    int n;
    cout << "Enter a number (0-20): ";
    cin >> n;
    if (n < 0 || n > 20) { cout << "Out of range.\n"; return; }
    unsigned long long fact = 1;
    int i = n;
    while (i > 1) {          // multiply n * (n-1) * ... * 2
        fact *= i;
        i--;
    }
    cout << n << "! = " << fact << "\n";
}

// =====================================================================
// 4. Multiplication table (user picks number and limit)
// LOGIC: loop counter is the multiplier. Inputs make it general.
// =====================================================================
void p4() {
    int number, limit;
    cout << "Table of: ";   cin >> number;
    cout << "Up to: ";      cin >> limit;
    for (int i = 1; i <= limit; i++)
        cout << number << " x " << i << " = " << number * i << "\n";
}

// =====================================================================
// 5. raiseToPow(x, n) with function (handles 0 and negative powers)
// LOGIC: multiply x by itself |n| times; if n < 0 take the reciprocal.
// =====================================================================
double raiseToPow(double x, int power) {
    if (power == 0) return 1.0;
    int n = (power < 0) ? -power : power;
    double result = 1.0;
    for (int i = 1; i <= n; i++) result *= x;
    return (power < 0) ? 1.0 / result : result;
}
void p5() {
    double x; int p;
    cout << "Base: ";  cin >> x;
    cout << "Power (integer, may be negative): "; cin >> p;
    if (x == 0 && p < 0) { cout << "Undefined (division by zero).\n"; return; }
    cout << x << " ^ " << p << " = " << raiseToPow(x, p) << "\n";
}

// =====================================================================
// 6. Recursive power and factorial
// LOGIC: every recursive function needs (1) a base case that stops,
//        (2) a call on a SMALLER problem.
// =====================================================================
double powRec(double x, int n) {
    if (n == 0) return 1.0;                // base case
    if (n < 0)  return 1.0 / powRec(x, -n);
    return x * powRec(x, n - 1);           // smaller problem
}
unsigned long long factRec(int n) {
    if (n <= 1) return 1;                  // base case
    return n * factRec(n - 1);
}
void p6() {
    cout << "2 ^ 10 = " << powRec(2, 10) << "\n";
    cout << "2 ^ -2 = " << powRec(2, -2) << "\n";
    cout << "5! = " << factRec(5) << "\n";
    cout << "10! = " << factRec(10) << "\n";
}

// =====================================================================
// 7. Linear search
// LOGIC: scan from index 0; stop at the first match (break);
//        position -1 means "not found".
// =====================================================================
void p7() {
    const int MAX = 100;
    int a[MAX], n, key, pos = -1;
    cout << "How many numbers (max 100)? "; cin >> n;
    readArray(a, n);
    cout << "Search for: "; cin >> key;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) { pos = i; break; }
    }
    if (pos == -1) cout << key << " not found.\n";
    else cout << key << " found at index " << pos << " (position " << pos + 1 << ")\n";
}

// =====================================================================
// 8. Frequency counting (how many 1s, 2s, 3s ... 10s)
// LOGIC: use the VALUE as the array INDEX: count[value]++.
// =====================================================================
void p8() {
    int count[11] = {0}, n, x;
    cout << "How many numbers? "; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "  number (1-10): "; cin >> x;
        if (x >= 1 && x <= 10) count[x]++;
        else cout << "  ignored (out of range)\n";
    }
    for (int v = 1; v <= 10; v++)
        if (count[v] > 0)
            cout << v << " appears " << count[v] << " time(s)\n";
}

// =====================================================================
// 9. Selection sort (find smallest, swap into place)
// LOGIC: for each position i, find the index of the minimum in the
//        unsorted part, then swap it into i using a temp variable.
// =====================================================================
void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[minIdx]) minIdx = j;
        int temp = a[i];
        a[i] = a[minIdx];
        a[minIdx] = temp;
    }
}
void p9() {
    const int MAX = 100;
    int a[MAX], n;
    cout << "How many numbers? "; cin >> n;
    readArray(a, n);
    selectionSort(a, n);
    cout << "Sorted: "; printArray(a, n);
}

// =====================================================================
// 10. Binary search (on sorted data)
// LOGIC: look at the middle; discard the half that cannot contain the
//        key. Each step halves the search space.
// =====================================================================
int binarySearch(const int a[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
void p10() {
    const int MAX = 100;
    int a[MAX], n, key;
    cout << "How many numbers? "; cin >> n;
    readArray(a, n);
    selectionSort(a, n);                       // binary search needs sorted data
    cout << "Sorted: "; printArray(a, n);
    cout << "Search for: "; cin >> key;
    int pos = binarySearch(a, n, key);
    if (pos == -1) cout << "Not found.\n";
    else cout << "Found at index " << pos << "\n";
}

// =====================================================================
// 11-13. Two-dimensional arrays (3 x 3)
// =====================================================================
const int ROWS = 3, COLS = 3;

void readMatrix(int m[][COLS]) {
    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < COLS; c++) {
            cout << "  m[" << r << "][" << c << "]: ";
            cin >> m[r][c];
        }
}
void displayMatrix(const int m[][COLS]) {
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) cout << "\t" << m[r][c];
        cout << "\n";
    }
}

// 11. Matrix input and display
// LOGIC: outer loop = rows, inner loop = columns.
void p11() {
    int m[ROWS][COLS];
    readMatrix(m);
    cout << "Matrix:\n";
    displayMatrix(m);
}

// 12. Flip (reverse column order of each row)
// LOGIC: swap column j with column COLS-1-j, only up to the middle,
//        otherwise you would flip everything back.
void p12() {
    int m[ROWS][COLS];
    readMatrix(m);
    cout << "Original:\n"; displayMatrix(m);
    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < COLS / 2; c++) {
            int temp = m[r][c];
            m[r][c] = m[r][COLS - 1 - c];
            m[r][COLS - 1 - c] = temp;
        }
    cout << "Flipped:\n"; displayMatrix(m);
}

// 13. Transpose of a square matrix
// LOGIC: swap m[r][c] with m[c][r]. Loop only ABOVE the diagonal
//        (c starts at r+1) so each pair is swapped exactly once.
void p13() {
    int m[ROWS][COLS];
    readMatrix(m);
    cout << "Original:\n"; displayMatrix(m);
    for (int r = 0; r < ROWS; r++)
        for (int c = r + 1; c < COLS; c++) {
            int temp = m[r][c];
            m[r][c] = m[c][r];
            m[c][r] = temp;
        }
    cout << "Transposed:\n"; displayMatrix(m);
}

// =====================================================================
// 14. "Unlucky employees"
// PROBLEM: find employees whose NET salary is LESS than that of some
//          colleague with a LOWER gross salary (tax-slab anomaly).
// LOGIC: compute net[] for everyone; for each person compare with all
//        others. A flag array remembers who is unlucky.
// Try: 9000, 10000, 10001, 20000, 20001
// =====================================================================
void p14() {
    const int MAX = 100;
    double gross[MAX], net[MAX];
    bool unlucky[MAX];
    int n;
    cout << "Number of employees (max 100): "; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "  gross salary of employee " << i + 1 << ": ";
        cin >> gross[i];
        net[i] = netSalary(gross[i]);
        unlucky[i] = false;
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (gross[j] < gross[i] && net[j] > net[i]) {
                unlucky[i] = true;
                break;
            }
    cout << "Unlucky employees:\n";
    bool any = false;
    for (int i = 0; i < n; i++)
        if (unlucky[i]) {
            cout << "  employee " << i + 1 << "  gross " << gross[i]
                 << "  net " << net[i] << "\n";
            any = true;
        }
    if (!any) cout << "  none\n";
}

// =====================================================================
// 15. Bubble sort with pointer-based swap
// LOGIC: compare neighbours, swap if out of order; after each pass the
//        largest value "bubbles" to the end. Stop early if no swaps.
//        swapPtr uses pointers so the ORIGINAL values change.
// =====================================================================
void swapPtr(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int a[], int n) {
    for (int pass = 0; pass < n - 1; pass++) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - pass; j++)
            if (a[j] > a[j + 1]) {
                swapPtr(&a[j], &a[j + 1]);
                swapped = true;
            }
        if (!swapped) break;
    }
}
void p15() {
    const int MAX = 100;
    int a[MAX], n;
    cout << "How many numbers? "; cin >> n;
    readArray(a, n);
    bubbleSort(a, n);
    cout << "Sorted: "; printArray(a, n);
}

// =====================================================================
// 16. Card deck: shuffle and deal
// LOGIC: deck[4][13] starts at 0 (empty). For card 1..52 pick a random
//        (suit, face) slot; if taken, pick again. The number stored is
//        the order in which the card is dealt.
// =====================================================================
void shuffleDeck(int deck[][13]) {
    for (int card = 1; card <= 52; card++) {
        int row, col;
        do {
            row = rand() % 4;
            col = rand() % 13;
        } while (deck[row][col] != 0);
        deck[row][col] = card;
    }
}
void dealDeck(const int deck[][13], int howMany) {
    const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *face[13] = {"Ace", "2", "3", "4", "5", "6", "7",
                            "8", "9", "10", "Jack", "Queen", "King"};
    for (int card = 1; card <= howMany; card++)
        for (int r = 0; r < 4; r++)
            for (int c = 0; c < 13; c++)
                if (deck[r][c] == card)
                    cout << "  card " << card << ": " << face[c] << " of " << suit[r] << "\n";
}
void p16() {
    int deck[4][13] = {0};
    srand((unsigned)time(0));
    shuffleDeck(deck);
    cout << "First 5 cards dealt:\n";
    dealDeck(deck, 5);
}

// =====================================================================
// 17. Own versions of strlen, strcpy, strcat
// LOGIC: a C string ends with '\0'. Walk until you hit it.
//        strcpy copies the '\0' too; strcat starts writing AT the
//        destination's '\0'.
// =====================================================================
int myStrlen(const char *s) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}
void myStrcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') { dest[i] = src[i]; i++; }
    dest[i] = '\0';
}
void myStrcat(char *dest, const char *src) {
    int d = myStrlen(dest), i = 0;
    while (src[i] != '\0') { dest[d + i] = src[i]; i++; }
    dest[d + i] = '\0';
}
void p17() {
    char a[50], b[50];
    myStrcpy(a, "Hello");
    myStrcpy(b, ", World");
    cout << "length of a = " << myStrlen(a) << "\n";
    myStrcat(a, b);
    cout << "after strcat: " << a << "  (length " << myStrlen(a) << ")\n";
}

// =====================================================================
// 18. File write and read
// LOGIC: ofstream writes, ifstream reads. "while (in >> x)" keeps
//        reading until end of file or a bad read.
// =====================================================================
void p18() {
    int n, x;
    cout << "How many numbers to save? "; cin >> n;
    ofstream out("numbers.txt");
    for (int i = 0; i < n; i++) {
        cout << "  number " << i + 1 << ": "; cin >> x;
        out << x << "\n";
    }
    out.close();

    ifstream in("numbers.txt");
    if (!in) { cout << "Could not open file.\n"; return; }
    int sum = 0, count = 0;
    while (in >> x) { sum += x; count++; }
    in.close();
    cout << "Read " << count << " numbers from numbers.txt, sum = " << sum << "\n";
}

// =====================================================================
// 19. Bit flags and masking
// LOGIC: each permission is ONE bit.
//        set    -> |=       clear  -> &= ~       toggle -> ^=
//        test   -> &        mask   -> & with 1s where you want to keep
// =====================================================================
const unsigned READ = 1, WRITE = 2, EXEC = 4, HIDDEN = 8;

void printBits(unsigned v) {
    for (int bit = 7; bit >= 0; bit--) cout << ((v >> bit) & 1);
}
void p19() {
    unsigned perms = 0;
    perms |= READ | WRITE;                      // set two flags
    cout << "after set READ,WRITE : "; printBits(perms); cout << "\n";
    cout << "can write? " << ((perms & WRITE) ? "yes" : "no") << "\n";
    perms &= ~WRITE;                            // clear WRITE
    cout << "after clear WRITE    : "; printBits(perms); cout << "\n";
    perms ^= HIDDEN;                            // toggle HIDDEN on
    cout << "after toggle HIDDEN  : "; printBits(perms); cout << "\n";
    perms ^= HIDDEN;                            // toggle HIDDEN off
    cout << "toggle HIDDEN again  : "; printBits(perms); cout << "\n";

    unsigned value = 0xB7;                      // 1011 0111
    cout << "value " ; printBits(value);
    cout << "  low nibble (value & 0x0F): "; printBits(value & 0x0F);
    cout << "  high nibble: "; printBits((value >> 4) & 0x0F); cout << "\n";
}

// =====================================================================
// 20. Generic Stack class using templates
// LOGIC: an array plus 'top' (index of the last item, -1 when empty).
//        push: check full, then ++top.   pop: check empty, then top--.
//        LIFO order lets us reverse a word.
// =====================================================================
template <class T>
class Stack {
    T *data;
    int size, top;
public:
    Stack(int s = 10) : size(s), top(-1) { data = new T[size]; }
    ~Stack() { delete[] data; }
    Stack(const Stack &) = delete;
    Stack &operator=(const Stack &) = delete;

    bool isEmpty() const { return top == -1; }
    bool isFull() const { return top == size - 1; }
    bool push(T value) {
        if (isFull()) return false;
        data[++top] = value;
        return true;
    }
    bool pop(T &value) {
        if (isEmpty()) return false;
        value = data[top--];
        return true;
    }
};
void p20() {
    Stack<int> nums(3);
    for (int i = 1; i <= 4; i++)
        cout << "push " << i * 10 << (nums.push(i * 10) ? " ok\n" : " -> stack FULL\n");
    int v;
    while (nums.pop(v)) cout << "pop " << v << "\n";

    const char *word = "assembly";
    Stack<char> chars(20);
    for (int i = 0; word[i] != '\0'; i++) chars.push(word[i]);
    cout << "\"" << word << "\" reversed = ";
    char ch;
    while (chars.pop(ch)) cout << ch;
    cout << "\n";
}

// =====================================================================
// MENU
// =====================================================================
int main() {
    void (*programs[21])() = {0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10,
                              p11, p12, p13, p14, p15, p16, p17, p18, p19, p20};
    const char *titles[21] = {"",
        "Average age", "Tax slab", "Factorial", "Multiplication table",
        "raiseToPow", "Recursion", "Linear search", "Frequency count",
        "Selection sort", "Binary search", "Matrix input/display",
        "Matrix flip", "Matrix transpose", "Unlucky employees",
        "Bubble sort (pointers)", "Deck shuffle", "String functions",
        "File I/O", "Bit flags and masks", "Stack template"};
    int choice;
    do {
        cout << "\n===== CS201 Solved Programs =====\n";
        for (int i = 1; i <= 20; i++) cout << i << ". " << titles[i] << "\n";
        cout << "0. Quit\nChoose: ";
        if (!(cin >> choice)) break;
        if (choice >= 1 && choice <= 20) {
            cout << "\n--- " << titles[choice] << " ---\n";
            programs[choice]();
        }
    } while (choice != 0);
    return 0;
}
