#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=1;i<n-1;i++){
        if(nums[i-1]<nums[i] && nums[i]<nums[i+1]){
            cout<<"true"<<endl;
        }
        cout<<"false";
    }
    return 0;
}