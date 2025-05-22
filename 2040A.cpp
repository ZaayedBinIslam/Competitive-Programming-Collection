// Created on 08-Dec-24
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
        int n, k;
        cin >> n >> k;
        vi original, evens, odds;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            original.push_back(x);
            if (x % 2 == 0) evens.push_back(i);
            else odds.push_back(i);
        }
        if (k % 2 == 0) {
            if (evens.size() == 1) {
                cout << "YES" << nl;
                cout << evens[0] + 1 << nl;
            } else cout << "NO" << nl;

        } else{
            if
        }

    }
    return 0;
}