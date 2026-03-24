#include<iostream>
using namespace std;

int main(){
    int n , extra;
    cin>>n>>extra;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]+ extra >= max){
            cout<<"true ,";
        }
        else{
            cout<<"false ,";
        }
    }
    return 0;
}