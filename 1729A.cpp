// Created on 22-Feb-24
//done ac
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a - 1) < (c - 1) + abs((c - b)))
            cout << 1 << endl;
        else if ((a - 1) > (c - 1) + abs((c - b)))
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}