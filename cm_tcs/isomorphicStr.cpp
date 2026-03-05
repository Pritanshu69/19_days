#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s,string t){
    int map1[128]={0};
    int map2[128]={0};
    int len=s.length();
    if(len!=t.length()) return false;
    for(int i=0;i<len;i++){
        if(map1[s[i]]!=map2[t[i]]) return false;
        map1[s[i]]=i+1;
        map2[t[i]]=i+1;
    }
    return true;
}
int main() {

    string s, t;
    cout<<"Enter the first string: ";
    cin >> s ;
    cout<<"Enter the second string: ";
    cin >> t ;

    if(isIsomorphic(s,t))
        cout << "true"<<endl;
    else
        cout << "false"<<endl;
}