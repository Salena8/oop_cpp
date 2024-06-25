
#include <iostream>
using namespace std;

// Function that takes an integer and returns a pointer to that integer
int* returnPtrInt(int value) {
    int* ptr = new int;         // Dynamically allocate memory for an integer
    *ptr = value;               // Assign the value to the allocated memory
    return ptr;                 // Return the pointer to the allocated memory
}

int main() {
    int number = 42;            // Example integer value
    int *ptrToNum = returnPtrInt(number); // Call the function

    cout << "Value: " << *ptrToNum << endl; // Print the value using the returned pointer
   
   delete ptrToNum;          // Free the dynamically allocated memory
    return 0;
}

