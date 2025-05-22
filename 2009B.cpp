// Created on 17-Sep-24
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
        vector<string> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        reverse(s.begin(), s.end());
        for (int i = 0; i < n; i++) {
            size_t found = s[i].find("#");
            cout << found + 1;
            if (i != n - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}