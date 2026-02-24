#include<bits/stdc++.h>
using namespace std;

bool isUgly(int n){
    if(n<=0) return false;
    if(n<=6) return true;
    while(n>1){
        if(n%2==0) n/=2;
        else if(n%3==0) n/=3;
        else if(n%5==0) n/=5;
        else
        return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the number to check whether ugly or not: ";
    cin>>n;
    cout<<boolalpha<<isUgly(n)<<endl;
    return 0;
}