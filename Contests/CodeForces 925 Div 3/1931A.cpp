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
        bool found = false;
        for (int i = 1; i <= 26 && !found; i++) {
            for (int j = 1; j <= 26 && !found; j++) {
                for (int k = 1; k <= 26 && !found; k++) {
                    if ((i + j + k) == n) {
                        cout << char(i + 'a' - 1) << char(j + 'a' - 1) << char(k + 'a' - 1) << endl; //typecast
                        found = true;
                    }
                }
            }
        }
    }
    return 0;
}
