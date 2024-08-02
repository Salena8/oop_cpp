#include<iostream>
using namespace std;
 class Point{
    public:
    int x,y;
    Point(){
        x = 0;
        y = 0;
    }
    Point(int x_, int y_)
    {
        x = x_;
        y = y_;
    }
    void display(){
        cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
    }
 };

int main(){
    Point obj1;
    cout<<"default"<<endl;
    obj1.display();
    Point obj2(4,5);
    cout<<"Parameterized"<<endl;
    obj2.display();
    return 0 ;

}