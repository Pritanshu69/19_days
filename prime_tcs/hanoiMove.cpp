#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int disk;
    cout<<"Enter the number of disk: ";
    cin>>disk;
    cout<<"Number of move is: "<<(pow(2,disk))-1<<endl;  //2^n-1 number of moves
    return 0;
}
