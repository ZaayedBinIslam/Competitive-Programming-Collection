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
    map<string, int> mp;
    while (t--) {
        int type, y;
        string x;

        cin >> type;
        if (type == 1) {
            cin >> x >> y;
            mp[x] += y;
        } else if (type == 2) {
            cin >> x;
            mp.erase(x);
        } else if (type == 3) {
            cin >> x;
            cout << mp[x] << nl;
        }
    }
    return 0;
}
