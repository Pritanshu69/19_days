#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int total=0;
    for(int j=0;j<n;j++){
        total+=arr[j];
    }
    int leftSum=0;
    for(int i=0;i<n;i++){
        int rightSum=total-leftSum-arr[i];
        if(leftSum==rightSum){
            cout<<i<<endl;
            return 0;
        }
        leftSum+=arr[i];
    }
    cout<< -1<<endl;
}