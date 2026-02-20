#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the number series: ";
    cin>>s;
    string ans="";
    ans+=s[0];
    for(int i=1;i<=s.length();i++){
        if(s[i]!=s[i-1]){
            ans+=s[i];
        }
    }
    cout<<"The output is: "<<ans<<endl;
    return 0;
}
