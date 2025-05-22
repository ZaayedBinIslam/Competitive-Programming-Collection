// Created on 15-Feb-24.
//ac
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char largest = s[0];
        for (int i = 0; i < n - 1; i++) {
            if (largest < s[i + 1]) {
                largest = s[i + 1];
            }
        }
        cout << largest - 96 << endl;

    }
    return 0;
}


