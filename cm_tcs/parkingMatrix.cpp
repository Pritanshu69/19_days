#include<iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int maxCount=0;
    int rowIndex=0;
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            if(arr[i][j]==1) count++;
        }
        if(count>maxCount){
            maxCount=count;
            rowIndex=i+1;
        }
    }
    cout<<rowIndex<<endl;
    return 0;
}