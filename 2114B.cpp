//done
#include <bits/stdc++.h>

using namespace std;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl "\n"

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


int main() {
    faster;

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < n; i++) {
            char c;
            cin >> c;
            if (c == '0') cnt0++;
            else cnt1++;
        }
        int extraPairs = n / 2 - k; //left after deleting good pairs

        // if it can be constructed as 101010... so that one==zero ,only then its yes
        // extra pair count should be less than min of the counts
        // also the mod value must be same , so if theres odd extra pairs, must have odd amount of 0s and 1s
        // trick here is ,no need to count ones and zeroes, checking mod value is enough
        if (extraPairs <= min(cnt0, cnt1) && extraPairs % 2 == cnt0 % 2) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }

    return 0;
}
