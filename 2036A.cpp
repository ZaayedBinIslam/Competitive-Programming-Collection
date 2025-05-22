// Created on 02-Nov-24
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
        vi v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        bool flag = 0;
        for (int i = 0; i < n - 1; i++) {
            if (abs(v[i] - v[i + 1]) == 5 or abs(v[i] - v[i + 1]) == 7)
                continue;
            else {
                flag = 1;
                cout << "NO" << endl;
                break;
            }
        }
        if (flag == 0) cout << "YES" << endl;
    }
    return 0;
}