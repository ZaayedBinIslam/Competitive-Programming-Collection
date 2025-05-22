// Created on 06-Dec-24
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
    int lvls;
    cin >> lvls;
    set<int> s;
    int p, q;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() == lvls) cout << "I become the guy." << nl;
    else cout << "Oh, my keyboard!" << nl;


    return 0;
}