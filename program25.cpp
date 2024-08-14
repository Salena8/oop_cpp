#include<iostream>
using namespace std;
class B;
class A{
    int num1;
    public:
    void setdata(int a){
        num1 = a;
    }
    void display(){
        cout<<"a: "<<num1<<endl;
    }
    friend int swap(A,B);
};
class B{
    int num2;
    public:
    void setdata(int b){
        num2 = b;
    }
    void display(){
        cout<<"b: "<<num2<<endl;
    }
    friend int swap(A,B);
};
int swap(A a_obj, B b_obj){
    int temp = a_obj.num1;
    a_obj.num1 = b_obj.num2;
    b_obj.num2 = temp;
    cout<<"a: "<<a_obj.num1<<endl;
    cout<<"b: "<<b_obj.num2<<endl;
}
int main(){
    A a1;
    a1.setdata(5);
    B b1;
    b1.setdata(2);
    cout<<"before swapping"<<endl;
    a1.display();
    b1.display();
    cout<<"after swapping"<<endl;
    cout<<swap(a1,b1)<<endl;
    return 0;


}