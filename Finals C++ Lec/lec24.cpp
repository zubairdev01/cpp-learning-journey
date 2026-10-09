
#include <iostream>
#include <conio.h>
#include <stdlib.h> // Required for malloc() and free()

using namespace std;

int main() {
    // Variable Declarations
    int num_students;
    int total_ages = 0;
    
    // Pointers for handling dynamic memory
    int *ptr1, *ptr2;

    // 1. Get the number of records from the user
    cout << "How many student ages you want to store: ";
    cin >> num_students;

    // 2. Allocate dynamic memory using malloc
    ptr1 = (int*) malloc(num_students * sizeof(int));

    // 3. Check if memory allocation was successful
    if (ptr1 == NULL) {
        cout << "\nDynamic memory not allocated!";
        return 0; // Exit program if allocation fails
    }

    // 4. Assign original pointer address to a temporary pointer for processing
    ptr2 = ptr1;

    // 5. Loop to take inputs and calculate total age
    for (int i = 1; i <= num_students; i++) {
        cout << "Enter age of student " << i << ": ";
        cin >> *ptr2; // Store input at current pointer location
        
        total_ages = total_ages + *ptr2; // Add to running total
        ptr2++; // Move pointer to the next memory block
    }

    // 6. Calculate and display the average age
    cout << "\nAverage Age = " << (total_ages / num_students) << endl;

    // 7. Free up memory and clean up pointers to prevent memory leaks/dangling pointers
    free(ptr1);
    ptr1 = NULL;
    ptr2 = NULL;

    getch();
    return 0;
}
