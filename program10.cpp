
#include <iostream>
using namespace std;

// Function that takes a reference to a string and modifies it
void modifyString(string& str) {
    str = " modified";
}

int main() {
    string myString = "Original string";
    cout << "Before: " << myString << endl;
    
    // Pass the string to the function
    modifyString(myString);
    
    cout << "After: " << myString << endl;
    
    return 0;
}
