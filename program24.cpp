#include<iostream>
using namespace std;
class B;

class A{
    int num;
    public:
    A(){
       num = 20;
    }
    friend int add(A,B);
};
class B{
    int num;
    public:
    B(){
       num = 30;
    }
    friend int add(A,B);
};
int add(A a, B b){
    return a.num + b.num;
};
int main(){
    A obj1;
    B obj2;
    cout<<"addition using friend func"<<endl;
    cout<<"sum is: "<<add(obj1,obj2)<<endl;
    return 0;
}