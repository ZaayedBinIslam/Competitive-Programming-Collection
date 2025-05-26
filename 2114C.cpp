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
        int n;
        cin >> n;
        set<int> s;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            s.insert(a);
        }
        vector<int> v(s.begin(), s.end());
        for (int i = 0; i < v.size() - 1; i++) {

            if (v[i] + 1 == v[i + 1]) {
                v.erase(v.begin() + i + 1);
            }
        }
        cout << v.size() << nl;

    }
    return 0;
}