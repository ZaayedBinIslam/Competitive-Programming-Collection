// Created on 26-Nov-24
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
        int n;
        cin >> n;
        vi v;
        for (int i = 2; i <= n; i++) {
            int term = ceil(n / i);
            v.push_back((i * (term * (term + 1))) / 2);
        }

        auto max = max_element(v.begin(), v.end());
        cout << max - v.begin() + 2 << nl; //printing the position. since we started loop from 2 so we add 2
    }
    return 0;
}