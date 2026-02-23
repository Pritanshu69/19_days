#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> freq(26, 0);

    // 🔹 your loop style
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];        // current character
        freq[c - 'a']++;      // increase its frequency
    }

    int ans = 0;

    // count how many pairs we can form
    for (int i = 0; i < 26; i++) {
        ans += freq[i] / 2;
    }

    cout << ans << endl;

    return 0;
}