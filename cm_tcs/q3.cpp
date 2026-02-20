#include<iostream>
#include<unordered_map>
using namespace std;
//have to take string not int
string checkSubstring(int a1[],int n,int a2[],int m){
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        if(freq[a2[i]]>0){
            freq[a2[i]]--;
        }
        else{
        return "No";
        }
    }
    return "Yes";
}

int main()
{
    int n, m;

    cout << "Enter size of array a1: ";
    cin >> n;
    int a1[n];

    cout << "Enter elements of a1:\n";
    for (int i = 0; i < n; i++)
        cin >> a1[i];

    cout << "Enter size of array a2: ";
    cin >> m;
    int a2[m];

    cout << "Enter elements of a2:\n";
    for (int i = 0; i < m; i++)
        cin >> a2[i];

    cout << "Result: " << checkSubstring(a1, n, a2, m) << endl;

    return 0;
}