//conversion routine in destination class

#include<iostream>
using namespace std;

class Time{
    int hrs, min;
    public:
    Time(int h, int m){
        hrs = h;
        min = m;
    }
    int gethrs(){
        return hrs;
    }
    int getmin(){
        return min;
    }
    void display(){
        cout<<"Hours: "<<hrs<<endl;
        cout<<"Minutes: "<<min<<endl;
    }
};
class Minutes{
    int m;
    public: 
    Minutes(){
        m = 0;
    }
    Minutes(Time t1){
        m = t1.gethrs() * 60 +t1.getmin();
    }
    void display(){
       cout<< "Total minutes: "<<m<<endl;

    }
};
int main(){
    Time obj_t(5,40);
    Minutes obj_m;
    obj_m = obj_t;
    obj_t.display();
    obj_m.display();
    return 0;
}