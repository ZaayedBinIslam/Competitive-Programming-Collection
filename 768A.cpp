// Created on 20-Sep-25
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
    vi v(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[i] = x;
        mp[v[i]]++;
    }
    getUnique(v);
    sort(v.begin(), v.end());
    int count = 0;
    for (int i = 1; i < v.size() - 1; i++) {
        if (v[i] > v[i - 1] && v[i] < v[i + 1]) {
            count += mp[v[i]];
        }
    }
    cout << count << nl;


    return 0;
}
