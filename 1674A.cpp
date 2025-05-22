// Created on 22-Feb-24
//done ac
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x > y || y % x != 0)
            cout << "0 0" << endl;
        else {
            cout << 1 << ' ' << y / x << endl;
        }
    }
    return 0;
}