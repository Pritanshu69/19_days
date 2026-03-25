#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int left=0;
    int right=str.length()-1;
    while(left<right){
        //skipping white lines
        if(str[left]==' '){
            left++;
            continue;
        }
        if(str[right]==' '){
            right--;
            continue;
        }
        //now compare
        if(tolower(str[left])!=tolower(str[right])){
            cout<<"false";
            return 0;
        }
        left++;
        right--;
    }
    cout<<"true"<<endl;
    return 0;
}