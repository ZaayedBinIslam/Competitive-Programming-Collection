// Created on 25-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n;
    cin >> n;
    bool noEven = true;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
            noEven = false;
        }
    }
    if (noEven)cout << "-1";
    return 0;
}