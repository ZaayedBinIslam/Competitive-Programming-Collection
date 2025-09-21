// Created on 20-Sep-25
//done
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
        ll n;
        cin >> n;
        ll count = 0;
        bool f = false;
        while (n != 1) {
            if (n < 10 && (n != 1 && n != 3 && n != 6 && n != 9)) {
                // cout << -1 << nl;
                f = true;
                break;
            }
            if (n % 6 == 0) {
                n /= 6;
            } else n *= 2;
            count++;
        }
        if (f) cout << -1 << nl;
        else cout << count << nl;
    }
    return 0;
}
