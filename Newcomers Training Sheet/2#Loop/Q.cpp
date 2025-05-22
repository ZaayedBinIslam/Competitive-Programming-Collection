// Created on 23-Feb-24
//ac done

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll int n;
        cin >> n;
        while (true) {
            cout << n % 10 << ' ';
            if (n < 10) break;
            n = n / 10;
        }
        cout << endl;
    }
    return 0;
}