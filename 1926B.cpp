// Created on 19-Feb-24
//
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        int flag = 0;
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        for (int i = 0; i < n; i++) {
            if (num[i] > 0 ) {
                if (num[i] != num[i + 1]) {
                    cout << "TRIANGLE" << endl;
                    break;
                } else if (num[i] == num[i + 1]) {
                    cout << "SQUARE" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}