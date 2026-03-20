#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()){
        cout<<"false"<<endl;
        return 0;
    }
    int freq[26]={0};
    //counting s1:
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
    }
    for(int j=0;j<s2.length();j++){
        freq[s2[j]-'a']--;
    }
    //now check:
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<"false"<<endl;
            return 0;
        }
    }
    cout<<"true"<<endl;
    return 0;
}