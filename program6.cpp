
#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int x = 5, y = 10, z = 15;
    
    // Calling the add function with two integers
    cout << "Sum of x and y: " << add(x, y) << endl;

    // Calling the add function with three integers
    cout << "Sum of x, y, and z: " << add(x, y, z) << endl;

    
    return 0;
}
