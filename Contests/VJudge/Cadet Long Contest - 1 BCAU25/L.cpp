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
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < t - 1; i++) {
        if (s[i] == s[i+1]) {
            cnt++;
        }
    }
    cout << cnt << nl;
    return 0;
}
