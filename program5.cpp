#include<iostream>
using namespace std;
 
int calculate( int num1, int num2, char o){
switch (o){
     case '+':
        return num1+num2;
    case '-':
        return num1-num2;
    case '*':
      return num1*num2;
    case '/' :
        return num1/num2;
    defaut: 
        return "Error!"
};
}

int main(){
    int num1,num2;
    char o;
    cout<<"Enter two number and a operator"<<endl;
    cin>>num1>>num2>>o;
    int result = calculate(num1,num2,o);
    cout<<"Result of operation : "<<result<<endl;
    return 0;
}