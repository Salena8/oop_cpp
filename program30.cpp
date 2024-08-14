#include<iostream>
using namespace std;

class Complex{
    int real ,img;
    public:
    void getdata(){
        cout<<"Enter a complex number (real and imaginary part): ";
        cin>>real>>img;
    }

    void add(Complex &obj1, Complex &obj2){
        real = obj1.real + obj2.real;
        img = obj1.img + obj2.img;
        
    }
     void display(){
        cout<<"result: "<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    Complex num1, num2 ,num3;
    num1.getdata();
    num2.getdata();
    num3.add(num1, num2);
    num3.display();
    return 0 ;
}