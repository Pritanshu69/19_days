#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    int count=0;
    cout<<"Enter the range for n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        if(isPrime(i)==true){
            count+=1;
        }
    }
    cout<<"Number of Prime numbers: "<<count<<endl;
    return 0;
}