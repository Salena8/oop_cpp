#include<iostream>
using namespace std;

class Number{
    private:
    int value;
    public:
    Number(int v){
        value  = v;
    }
    void modifyNum(Number &num){
       num.value = 2*num.value;
      
    }
    void display(){
         cout<<"value: "<<value<<endl;
    }
};
int main(){
    Number obj(3);
    obj.display();
    obj.modifyNum(obj);
    obj.display();
    
    return 0;
}