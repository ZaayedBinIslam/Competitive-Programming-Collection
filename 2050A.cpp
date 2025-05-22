// Created on 05-Dec-24
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
        int n, m;
        cin >> n >> m;
        vi v(n);
        int sumchar = 0,words=0;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            if (flag) { sumchar += (int) s.size();words++; }
            if (sumchar > m) {
                sumchar -= s.size();
                words--;
                flag = false;
            }
        }
        cout<<words<<nl;
    }
    return 0;
}