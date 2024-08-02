#include <iostream>

class Example {
public:
    // Constructor
    Example() {
        std::cout << "Constructor is called" << std::endl;
    }

    // Destructor
    ~Example() {
        std::cout << "Destructor is called" << std::endl;
    }
};

int main() {
    // Create an object of Example
    Example obj;
    Example obj2;
    // Object goes out of scope here
    return 0;
}
