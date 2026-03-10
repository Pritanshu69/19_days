#include<bits/stdc++.h>
using namespace std;

int main(){
    int R,C;
    cin>>R>>C;
    int arr[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>arr[i][j];
        }
    }
    int count=0;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(arr[i][j]==1) count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}