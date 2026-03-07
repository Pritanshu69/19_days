#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int pass=0;
    for(int i=0;i<N;i++){
        int sum=0;
        for(int j=0;j<M;j++){
            int marks;
            cin>>marks;
            sum+=marks;
        }
        if(sum/M>50) pass++;
    }
    cout<<pass<<endl;
    return 0;
}