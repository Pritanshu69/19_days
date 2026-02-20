#include<iostream>
#include<unordered_map>
using namespace std;

int firstNonRepeating(int arr[],int n){
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[arr[i]]==1){
            return arr[i];
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = firstNonRepeating(arr,n);
    cout<<result<<endl;
    return 0;
}