// Created on 07-Mar-24
//done ac
#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef vector<long long> vl;

int main() {
    int n, q;
    cin >> n >> q;
    vi v1[n];
    while (q--) {
        int type;
        cin >> type;
        int t, x;
        if (type == 0) {
            cin >> t >> x;
            v1[t].push_back(x);
        } else if (type == 1) {
            cin >> t;
            if (v1[t].empty()) {
                cout << endl;
                continue;
            }
            cout<<v1[t][0];
            for (int i = 1; i < v1[t].size(); i++) {
                cout <<' '<< v1[t][i];
            }
            cout << '\n';
        } else if (type == 2) {
            cin >> t;
            if (!v1[t].empty()) v1[t].clear();
        }


    }
    return 0;
}