#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int left=0;
    int right=str.length()-1;
    while(left<right){
        if(str[left]!=str[right]){
            cout<<"false";
            return 0;
        }
        left++;
        right--;
    }
    cout<<"true";
    return 0;
}