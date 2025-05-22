// Created on 17-Nov-24
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if ((n - 2) % x == 0) {
                v.push_back(x);
                mp[x]++;
            }
        }

        for (int i = 0; i < v.size(); i++) {
            int m = (n - 2) / v[i];
            if (mp[m] != 0 && m == v[i]) {
                if (mp[m] >= 2) {
                    cout << v[i] << " " << m << endl;
                    break;
                }
            } else if (mp[m] != 0 && m != v[i]) {
                cout << v[i] << " " << m << endl;
                break;
            }
        }

    }
    return 0;
}