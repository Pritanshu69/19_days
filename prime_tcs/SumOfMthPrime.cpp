#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int M,N;
    cout<<"Enter the value of M: ";
    cin>>M;
    cout<<"Enter the value of N: ";
    cin>>N;
    int ans=0;
    int num=2;
    int count=0;
    while(count<M+N){
        if(isPrime(num)){
            count++;
            if(count>=M){
                ans+=num;
            }
        }
        num++;
    }
    cout<<"Sum: "<<ans<<endl;
    return 0;
}