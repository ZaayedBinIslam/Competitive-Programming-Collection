// Created on 18-Feb-24
//
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int coins = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] == '@') {
                coins++;
            }
            if (s[i] == '*' && s[i + 1] == '*' && i != n - 1)
                break;
        }
        cout << coins << endl;
    }
    return 0;
}