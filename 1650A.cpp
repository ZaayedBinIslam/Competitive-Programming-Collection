// Created on 12-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)


int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        string s;
        char c;
        cin >> s >> c;

        int flag = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c && (i % 2 == 0)) {
                flag = true;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}