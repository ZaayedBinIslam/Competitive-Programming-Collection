// Created on 22-Feb-24
//done ac
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll int m;
        cin >> m;
        int digits = (int) log10(m) + 1;
        int d = m - pow(10, digits - 1);
        cout << d << endl;

    }
    return 0;
}