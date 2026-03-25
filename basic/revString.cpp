#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;
    int left=0;
    int right=str.length()-1;

    // while(left<right){
    //     char temp=str[left];
    //     str[left]=str[right];
    //     str[right]=temp;

    //     left++;
    //     right--;
    while(left<right){
        swap(str[left],str[right]);
        left++;
        right--;
        }
        cout<<str<<endl;
        return 0;
    }

