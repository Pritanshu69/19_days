#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int prices[n];
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int buy = prices[0];
    int maxProfit=0;
    for(int i=1;i<n;i++){
        if(prices[i]<buy){
            buy=prices[i];
            int profit=prices[i]-buy;
            if(profit>maxProfit){
                maxProfit=profit;
            }
        }
    }
    cout<<maxProfit;
    return 0;   
}