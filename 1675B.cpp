// Created on 19-Sep-25
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
        vl v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int count = 0;
        bool flag = false;
        for (ll i = n - 2; i >= 0; i--) {
            while (v[i] >= v[i + 1] && v[i] > 0) {
                v[i] /= 2;
                count++;
            }
            if (v[i] == v[i + 1]) {
                cout << -1 << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
            cout << count << endl;
    }
    return 0;
}
