// Created on 29-Nov-24
//
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
        int n;
        cin >> n;
        int cnt = 0;
        int term = 0;//right to left
        vi v;
        while (n) {
            if (n % 10 != 0) {
                v.push_back((n % 10) * pow(10, term));
                cnt++;
            }
            term++;
            n /= 10;
        }
        cout << cnt << nl;
        for (int i = 0; i < cnt; i++) {
            cout << v[i];
            if (i == cnt - 1) cout << nl;
            else cout << " ";
        }
    }
    return 0;
}