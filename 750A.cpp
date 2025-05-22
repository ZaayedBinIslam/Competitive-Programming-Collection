// Created on 04-Dec-24
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
    int n, k;
    cin >> n >> k;
    int min_remaining = 240 - k;
    int solved = 0;
    for (int i = 1; i <= n; i++) {
        if ((5 * (i * (i + 1))) / 2 <= min_remaining)solved++;
        else break;
    }
    cout<<solved<<nl;
    return 0;
}