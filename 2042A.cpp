// Created on 02-Dec-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#ifndef ONLINE_JUDGE
#define REDIRECT_IO \
    freopen("input.txt", "r", stdin);   \
    freopen("output.txt", "w", stdout); \
    freopen("error.txt", "w", stderr);
#else
#define REDIRECT_IO
#endif


#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'


int main() {
    faster;
    REDIRECT_IO;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vi v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<>());
        ll sum = v[0];
        int last = 0;
        int i = 1;
        while (sum < k) {
            sum += v[i];
            last = i - 1;
            i++;
            if (i == n) break;
        }
        if (sum == k) cout << 0 << nl;
        else if (sum > k) cout << k - (sum - v[last]) << nl;
        else cout << k - sum << nl;
//        cout << 'a' << sum << " " << last << nl;
    }
    return 0;
}