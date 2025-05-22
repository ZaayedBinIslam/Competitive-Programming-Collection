// Created on 22-Feb-24
//done ac
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll int a, b;
        cin >> a >> b;
        if (a > 0) {
            ll int sum = a * 1 + b * 2;
            cout << sum + 1 << endl;
        } else if ((a == 0 && b == 0) || a == 0)
            cout << 1 << endl;
    }

    return 0;
}