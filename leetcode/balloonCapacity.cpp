#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int w[n];
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    int Y;
    cin>>Y;
    int count=0;
    int sum=0;
    sort(w,w+n);
    for(int i=0;i<n;i++){
        if(sum+w[i]<Y){
            sum+=w[i];
            count++;
        }
        else break;
    }
    cout<<count<<endl;
    return 0;
}