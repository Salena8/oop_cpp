#include<iostream>
using namespace std;

//Function declaration with default argument for string
void function1(int num, string text = "Default string"){
   cout<<num<<endl;
   cout<<text<<endl;
}

int main(){
int num = 7;
string text = "Hello";

// Call the function with both arguments
cout<<"with both arguments"<<endl;
function1(num,text);

// Call the function with only the integer argument
cout<<"with only num argument"<<endl;
function1(num);
return 0;
}
