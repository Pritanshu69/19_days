#include <iostream>
#include <vector>
using namespace std;

void frequencyCount(vector<int>& arr, int N){
    int i=0;
    while(i<N){
        if(arr[i]<=0 || arr[i]>N){ //skipping condition
            i++;
            continue;
        }
        int index = arr[i] - 1;
        if(arr[index]<=0){
            arr[index]--; //increasing value
            arr[i]=0; //marked as counted already
            i++;
        }
        else{
            int temp=arr[index];
            arr[index]=-1; //start counting
            if(index != i){
                arr[i]=temp;
            } //displacing it for further calculations 
            else i++;
        }
    }
    for(int i=0;i<N;i++){
        arr[i]=-arr[i];
    }
}
int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    vector<int> arr(N);

    cout << "Enter elements:\n";
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    frequencyCount(arr, N);

    cout << "Frequencies:\n";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    return 0;
}
