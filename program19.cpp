#include<iostream>
using namespace std;

class Distance{
    int feet, inch;
    public:
    
    void getData(){
        cout<<"Enter value for feet and inch"<<endl;
        cin>>feet>>inch;
    }
    Distance addDistance(Distance obj1 , Distance obj2){
        Distance d3;
        d3.feet = obj1.feet + obj2.feet;
        d3.inch = obj1.inch + obj2.inch;
        d3.feet +=  d3.inch/12;
        d3.inch = d3.inch % 12;
        return d3;
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
    d3 = d3.addDistance(d1,d2);
    d3.display();
    return 0;
}