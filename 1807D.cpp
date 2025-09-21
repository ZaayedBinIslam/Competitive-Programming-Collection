// Created on 08-Sep-25
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
        ll n, q;
        cin >> n >> q;
        vi v(n);
        vl prefSum(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        prefSum[0] = v[0];
        for (ll i = 1; i < n; i++) {
            prefSum[i] = prefSum[i - 1] + v[i];
        }

        while (q--) {
            ll l, r, k;
            ll sum = prefSum[n - 1];
            cin >> l >> r >> k;
            if (l == 1) {
                sum -= prefSum[r - 1];
            } else
                sum -= prefSum[r - 1] - prefSum[l - 2];
            sum += (k * (r - l + 1));

            if (sum % 2 != 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
