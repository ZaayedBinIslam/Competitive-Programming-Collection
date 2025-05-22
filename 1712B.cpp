// Created on 06-Nov-24
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
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << lcm(i + 1, i + 1) << " ";
        }
        cout << endl;
        cout << lcm(2, 3) << endl;
    }
    return 0;
}