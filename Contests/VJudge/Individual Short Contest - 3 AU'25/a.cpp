#include <bits/stdc++.h>

using namespace std;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl "\n"

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


int main() {
    faster;


    int n, k;
    cin >> n >> k;
    vi v(n);
    int mn = INT_MAX, mx = -1;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }
    sort(v.begin(), v.end());
    if (n == 1) cout << v[0] + k << nl;
    else {
        for (int i = 0; i < n; i++) {
            v[i] += (mx - v[i]);
            k -= (mx - v[i]);
        }
        v[0] += ceil(n / k);

        cout << v[0] << nl;
    }


    return 0;
}
