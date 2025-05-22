// Created on 27-Nov-24
//done
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#ifndef ONLINE_JUDGE
#define REDIRECT_IO \
    freopen("input.txt", "r", stdin);   \
    freopen("output.txt", "w", stdout); \
    freopen("error.txt", "w", stderr);
#else
#define REDIRECT_IO
#endif


#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'


int main() {
    faster;
    REDIRECT_IO;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cnt = 0, i = 0;
        while (true) {
            if (i == s.size() - 1 || s.size() == 0) break;
            if (s[i] != s[i + 1]) {
                cnt++;
                s.erase(i, 2);
                i = 0;
            } else i++;
        }
//        cout << cnt << nl;
        if (cnt % 2 == 0) cout << "NET" << nl;
        else cout << "DA" << nl;

    }
    return 0;
}