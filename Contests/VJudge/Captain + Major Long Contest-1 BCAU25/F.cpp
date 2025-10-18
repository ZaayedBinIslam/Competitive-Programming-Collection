// Created on 05-Oct-25
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n), og;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int l = 0, r = n - 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                og.push_back(v[l]);
                l++;
            } else {
                og.push_back(v[r]);
                r--;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << og[i] << " ";
        }
        cout << nl;
    }
    return 0;
}
