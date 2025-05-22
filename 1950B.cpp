// Created on 06-May-24
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
            string s = "";
            for (int j = 0; j < n; j++) {
                s += ((i + j) % 2 == 0 ? "##" : "..");
            }
            cout << s << endl << s << endl;
        }

    }
    return 0;
}