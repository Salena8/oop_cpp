#include<iostream>
using namespace std;

class Time{
    int hours, minutes;
    public:
    Time(int h,int m){
        hours = h;
        minutes = m;
    }
    Time add( Time obj1, Time obj2){
        Time t3;
        t3.hours = obj1.hours + obj2.hours;
        t3.minutes = obj1.minutes + obj2.minutes;
        t3.hours += t3.minutes/60;
        t3.minutes = t3.minutes%60;
        return t3;
        
    }
    void display(){
        cout<<"Hours: "<<hours<<endl;
        cout<<"Minutes: "<<minutes<<endl;
    }
};
int main(){
    Time t1(5,60);
    Time t2(3,40);
    t1.display();
    t2.display();
    Time t3;
    t3 = t3.add(t1,t2);
    
    t3.display();
    return 0 ;
}