#include<iostream>
using namespace std;

class Length{
    int meter, centimeter;
    public:
     Length(){
        meter = 0;
        centimeter = 0;
    }

    Length(int m, int c){
        meter = m;
        centimeter = c;
    }
    Length operator +(Length obj2){
        Length obj3;
        obj3.meter = meter + obj2.meter;
        obj3.centimeter = centimeter + obj2.centimeter;

         // Converting excess centimeters to meters
        if(obj3.centimeter >= 100){
            obj3.meter += obj3.centimeter / 100;
            obj3.centimeter = obj3.centimeter % 100;
        }

        return obj3;
        

    }
    void display(){
        cout<<"sum is: "<<meter<<" meter and "<<centimeter<<" centimeter"<<endl;
    }

};
int main(){
    Length l1(5,4);
    Length l2(3,7);
    Length l3;
    l3 = l1+l2;
    l3.display();
    
    return 0;

}