// Created on 06-Oct-25
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
    int n;
    cin >> n;
    int v, ans = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v;
        mp[v]++;
        ans = max(ans, mp[v]);
    }

    cout << ans << endl;
    return 0;
}
