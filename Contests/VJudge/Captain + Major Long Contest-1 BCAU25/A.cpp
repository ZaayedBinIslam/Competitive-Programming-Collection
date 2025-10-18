// Created on 04-Oct-25
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
        int n, k;
        cin >> n >> k;
        vi v(n);
        for (int i = 0; i < n; i++) {
            char c;
            cin >> c;
            if (c == 'W') v[i] = 1;
            else v[i] = 0;
        }
        int ops = 0;
        for (int i = 0; i < n;) {
            if (v[i] == 0) {
                ops++;
                i += k;
            } else i++;
        }
        cout << ops << endl;
    }
    return 0;
}
