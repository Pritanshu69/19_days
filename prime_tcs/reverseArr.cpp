#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" Elements: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0;
    int right=n-1;
    while(left<right){
        int temp = arr[left];
        arr[left]=arr[right];
        arr[right]=temp;

        left++;
        right--;
    }
    cout<<"Output for reversed array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}