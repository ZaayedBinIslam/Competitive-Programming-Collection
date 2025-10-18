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
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    int mul = min(ceil(a / c), floor(a / c)); // 2
    int ans = 0;
    while (true) {
        if (c * mul > b) break;
        if (c * mul >= a && c * mul <= b) {
            flag = true;
            ans = c * mul;
            break;
        }
        mul++;
    }

    if (flag) {
        cout << ans << nl;
    } else cout << -1 << nl;
    return 0;
}
