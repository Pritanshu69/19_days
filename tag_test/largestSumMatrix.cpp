#include<iostream>
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

return 0;
}