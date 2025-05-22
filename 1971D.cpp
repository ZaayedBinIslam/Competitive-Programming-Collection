// Created on 02-Dec-24
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
        string s;
        cin >> s;
        //continuous 0s,continuous 1s,continuous 01s
        int s0 = 0, s1 = 0, s01 = 0;
        for (int i = 0; i < (int) s.size();) {
            if (s[i] == '0') {

            }
            else if (s[i] == '1') s0++;
        }
    }
    return 0;
}