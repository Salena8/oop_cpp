#include<iostream>
using namespace std;

class Distance{
    int meter;
    int centimeter;
    public:
    Distance(int m, int c){
        meter = m;
        centimeter = c;
    }
    friend void operator - (Distance &);
    void display(){
        cout<<"meter = "<<meter<<endl;
        cout<<"centimeter = "<<centimeter<<endl;
    }
};
void operator - (Distance &obj){
    obj.meter = -obj.meter;
    obj.centimeter = -obj.centimeter;
    
}
int main(){
    Distance d1(3,8);
    d1.display();
    -d1;
    d1.display();
    return 0;
}