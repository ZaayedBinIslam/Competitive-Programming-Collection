// Created on 25-Jun-24
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
        ll n, fact = 1;
        cin >> n;
        if (n == 0) cout << "1" << endl;
        else {
            for (int i = 1; i <= n; i++) {
                fact *= i;
            }
            cout << fact << endl;
        }
    }
    return 0;
}