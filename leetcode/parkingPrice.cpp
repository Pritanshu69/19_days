#include<iostream>
using namespace std;

int main(){
    int h;
    cin>>h;
    int cost=0;
    if(h<0){
        cout<<"Error"<<endl;
    }
    if(h<=2){
        cost = h * 100;
    }
    else if(h<=5){
        cost = 200 + (h-2)*50;
    }
    else{
        cost = 200 + 150 + (h-5)*20;
    }
    cout<<cost<<endl;
    return 0;
}