// Created on 11-Jul-24
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
        vi v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        int ops = 5;
        while (ops > 0) {
            v[0]++;
//            cout<<v[0]<<endl;
            sort(v.begin(), v.end());
            ops--;

        }
        cout << v[0] * v[1] * v[2] << endl;

    }
    return 0;
}