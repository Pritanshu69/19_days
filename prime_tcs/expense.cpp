#include<iostream>
#include<map>
using namespace std;

int main(){
    int income;
    cout<<"Enter income: ";
    cin>>income;
    string type;
    int exp;
    int totalexp=0;
    map<string,int>catagory;
    while(true){
        cout<<"Enter expense type: ";
        cin>>type;
        if(type=="done"){
        break;
        }
        cout<<"Enter the price of expense: ";
        cin>>exp;
        totalexp+=exp;
        catagory[type]+=exp;
    }
    cout<<"Total expense: "<<totalexp<<endl;
    cout<<"Total savings: "<<income-totalexp<<endl;
    cout<<"breakdown: \n";
    for(auto it: catagory){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    return 0;
}