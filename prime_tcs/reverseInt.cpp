#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int rev = 0;
    while(num>0){
        int digit = num%10;
        rev=rev*10+digit;
        num/=10;
    }
    cout<<"Reversed: "<<rev<<endl;
}