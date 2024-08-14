#include<iostream>
using namespace std;

class Room{
    int length, width;
    public:
    void getdata(){
        cout<<"Enter lenght and width for room"<<endl;
        cin>>length>>width;
    }
    void diplay(){
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
    }
    void area(){
        int area = length*width;
        cout<<"area is: "<<area<<endl;
    }
};
int main(){
    Room r1;
    r1.getdata();
    r1.diplay();
    r1.area();
    return 0;
}

