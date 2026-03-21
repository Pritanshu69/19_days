#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"enter valid";
        return 0;
    }
    if(n<1000){
        cout<<"5";
        return 0;
    }
    else if(n>1000 && n<5000){
        cout<<"10";
    }
    else{
        cout<<"15";
    }
    return 0;
}