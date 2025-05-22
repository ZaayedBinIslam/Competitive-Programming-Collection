// Created on 08-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

int main() {
    faster;
    int t;
    cin >> t;

    while (t--) {
        char c1, c2;
        cin >> c1 >> c2;
        int diff = c2 - c1;

        for (int i = 1; i <= diff; i++) {
            if (diff % i == 0) {
                cout << i << " " << ceil(94.0 / i) << '\n';
            }
        }

        if (t > 0)cout << endl;
    }

    return 0;
}