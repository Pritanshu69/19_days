#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of Elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int reachable = 0;
    for(int i=0;i<n;i++){
        if(i>reachable){
            cout<<"false"<<endl;
            return 0;
        }
        if(i+arr[i]>reachable){
            reachable=i+arr[i];
        }
    }
    cout<<"true"<<endl;
    return 0;
}