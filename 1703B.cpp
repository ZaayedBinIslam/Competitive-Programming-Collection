// Created on 16-Feb-24
//done ac
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int frequency[26] = {0};
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            frequency[s[i] - 65]++;
        }
        int counter = 0;
        for (int i = 0; i < 26; i++) {
            if (frequency[i] >= 1) {
                counter += 2 + (frequency[i] - 1);
            }
        }
        cout << counter << endl;
    }
    return 0;
}
