#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'

int main() {
    int t;
    cin >> t;
    while (t--) {
        vi v;
        for (int i = 0; i < 10; i++) {
            v = {i + 1};
        }
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << nl;
        }
    }
    return 0;
}