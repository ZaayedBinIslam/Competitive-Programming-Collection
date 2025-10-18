// Created on 05-Oct-25
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
    faster;
    int t;
    cin >> t;
    map<char, int> mp;
    string s = "codeforces";
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    while (t--) {
        char c;
        cin >> c;
        if (mp[c] != 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
