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
    int a = 0, b = 0, c = 0;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        a += x;
        b += y;
        c += z;
    }
    if (a == 0 && b == 0 && c == 0) {
        cout << "YES" << nl;
    } else cout << "NO" << nl;
    return 0;
}
