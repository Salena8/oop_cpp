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
    Point(Point &p){
       x = p.x;
       y = p.y;
    }
    void display(){
        cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
    }
 };

int main(){
    Point obj1;  // Default constructor
    cout << "Default constructor:" << endl;
    obj1.display();

    Point obj2(4, 5);  // Parameterized constructor
    cout << "Parameterized constructor:" << endl;
    obj2.display();

    cout << "Copy constructor:" << endl;
    Point obj3(obj2);  // Copy constructor
    obj3.display();
}