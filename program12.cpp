#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;
    
    void  area(){
        cout<<"area of rectangle is :"<<length*breadth<<endl;
    }
};

int main(){
    Rectangle obj;
    obj.length = 4;
    obj.breadth = 6;
    obj.area();
    return 0;

}
