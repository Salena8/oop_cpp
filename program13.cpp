#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    void displayInfo(){
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
    }
    
};
int main(){
    Student s1;
    s1.name = "Salina";
    s1.age = 20;
    s1.displayInfo();
    return 0;
}