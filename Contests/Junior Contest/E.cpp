// Created on 30-Apr-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        if (a == 0 || a == 1) { cout << -1 << endl; }
        else if (a == 2) { cout << 3 << endl; }
        else { cout << 2 << endl; }
    }
    return 0;
}