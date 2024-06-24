#include<iostream>
using namespace std;

int sum(int num1,int num2){
    return num1+num2;
}

int main(){
    int result = sum(4,5);
    cout<<"Sum of 4 and 5 : "<<result<<endl;
    return 0;
}