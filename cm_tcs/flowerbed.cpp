#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<m;i++){
        if(arr[i]==0){
            if((i==0 || arr[i-1]==0) && (i==m-1 || arr[i+1]==0)){
                arr[i] = 1;
                cnt++;
            }
        }
    }
    if(cnt>=n){
        cout<<"true ";
    }
    else{
        cout<<"false ";
    }
    return 0;
}