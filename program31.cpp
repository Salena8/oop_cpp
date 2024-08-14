#include<iostream>
using namespace std;

class Distance{
    int feet, inch;
    public:
    void getdata(){
        cout<<"Enter data in feet and inch: ";
        cin>>feet>>inch;
    }
    operator float(){
        float meter;
       return meter = (feet + inch/12)/3.33;
        
    }
};
int main(){
    Distance d1;
    d1.getdata();
    float x = d1;
    cout<<"X = "<<x<<" meter"<<endl;
    return 0;
}
