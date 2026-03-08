#include<iostream>
using namespace std;
int main(){
    int L,R;
    int sum=0;
    cin>>L>>R;
    for(int i=L;i<=R;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}