#include<iostream>
using namespace std;

inline int maximum(int a,int b,int c){
   int max= (a > b) ? (a > c ? a : c) : (b > c ? b : c);
   return max;
 } 

 int main(){
    int result = maximum(29,8,15);
    cout<<"Maximum : "<<result<<endl;
    return 0;
 }