#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num<=1) return false;
    if(num==2) return true;
    if(num%2==0) return false;
    for(int i=3;i*i<=num;i+=2){
        if(num%i==0) return false;
    }
    return true;
}

int main(){
    int X,Y;
    cin >> X >> Y;

    int A = 0, B = 0;
    int count = 0;
    int num = 2;

    while(true){
        if(isPrime(num)){   // ✅ check current number
            count++;

            if(count == X){
                A = num;
            }

            if(count == Y){
                B = num;
            }
        }

        if(A && B){
            break;
        }

        num++;   // move to next number
    }

    long long C = (A * B) - 1;

    cout << C <<endl;

    return 0;
}
