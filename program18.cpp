#include<iostream>
using namespace std;
class Distance{
    int feet, inch;
    public:
    
    void getData(){
        cout<<"Enter value for feet and inch"<<endl;
        cin>>feet>>inch;
    }
    void addDistance(Distance obj1, Distance obj2){
        feet = obj1.feet + obj2.feet;
        inch = obj1.inch + obj2.inch;
        feet = feet +inch/12;
        inch = inch % 12;

    }
    void display(){
        cout<<"Feet: "<<feet<<endl;
        cout<<"Inch: "<<inch<<endl;
    }
};
int main (){
    Distance d1,d2,d3;
    cout<<"For d1"<<endl;
    d1.getData();
    d1.display();
    cout<<"For d2"<<endl;
    d2.getData();
    d2.display();
    cout<<"adding both"<<endl;
    d3.addDistance(d1,d2);
    d3.display();
    return 0;
}