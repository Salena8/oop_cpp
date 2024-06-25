#include <iostream>
using namespace std;

        // External variable declaration
extern int externalVar;

int globalVar = 15;

        //using local var
int localVar(){
    int num = 5;
    return num;
}

        // Function to demonstrate the use of static variable
void staticFunction() {
    // static variable
    static int staticVar = 0;
    staticVar++;
    cout << "Static variable in staticFunction: " << staticVar << endl;
}

            /*Function to demonstrate the use of register variable
            void registerFunction() {
                // register variable
            register int registerVar = 10;
            cout << "Register variable in registerFunction: " << registerVar << endl;
            }*/

int main() {
   
   cout<<"local variable in main : " <<localVar()<<endl;
   
   cout<<"Global variable in main: "<<globalVar<<endl;
            // Using the static variable
   staticFunction();
   staticFunction(); // Calling again to show static behavior

            // Using the extern variable
   cout << "Extern variable in main: " << externalVar << endl;

    return 0;
}

// Definition of external variable
int externalVar = 30;
