#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int temp=n;
    int rev=0;
    while(temp>0){
        int digit=temp%10;
        rev=rev*10+digit;
        temp/=10;
    }
    return rev==n;
}
bool isRepeat(int n){
    int freq[10]={0};
    while(n>0){
        int d=n%10;
        freq[d]++;
        if(freq[d]>1) return true;
        n/=10;
    }
    return false;
}

int main(){
    int L,R;
    cin>> L >> R;
    int count=0;
    for(int i=L;i<=R;i++){
        if(i%7==0 && i%5 != 0 && !isPalindrome(i) && !isRepeat(i)){
            cout<<i <<" ";
            count+=1;
        }
    }
    if(count==0){
        cout<<-1;
    }
}
