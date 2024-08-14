#include<iostream>
using namespace std;

class Time{
    int hours;
    int min;
    public:
    Time(int h, int m){
        hours = h;
        min = m;
    }
    friend Time operator ==(Time, Time);

};
Time operator ==(Time t1, Time t2){
    if(t1.hours == t2.hours && t1.min == t2.min)
    return 1;
    else
    return 0;
}
int main(){
    Time obj1(5,40);
    Time obj2(5,40);
    if(obj1 == obj2)
    cout<<"both are equal time"<<endl;
    else 
    cout<<"both are not equal"<<endl;
    return 0;
}