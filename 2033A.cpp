// Created on 03-Dec-24
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
        int pos = 0;
        int i = 1;
        bool saku = true;
        while (abs(pos) <= n) {
            if (saku) {
                pos += (2 * i) - 1;
                saku = false;
            } else {
                pos += -1 * ((2 * i) - 1);
                saku = true;
            }
            i++;
        }
        if(saku) cout<<"Kosuke"<<nl;
        else cout<<"Sakurako"<<nl;
    }
    return 0;
}