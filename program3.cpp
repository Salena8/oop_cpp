#include<iostream>
using namespace std;

int main(){
    int num[5];
    int sum = 0;
    cout<<"Enter five integers"<<endl;
    for(int i = 0;i<5;i++){
        cin>>num[i];
    }

    for(int i = 0;i<5;i++){
        sum += num[i];
    }
    cout<<"Sum :"<<sum<<endl;
    return 0 ;

}