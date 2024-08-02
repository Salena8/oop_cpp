#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    void  area();
};
void Rectangle::area(){
    cout<<"area : "<<length*breadth<<endl;
}
int main(){
    Rectangle obj(4,2);
    obj.area();
    return 0;

}
