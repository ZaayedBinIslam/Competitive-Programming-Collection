// Bismillahir Rahmanir Raheem
// Created: 17 Jan 2026
// Author: zbi
//

#include <bits/stdc++.h>

using namespace std;

#define faster                                                                                     \
    ios_base::sync_with_stdio(false);                                                              \
    cin.tie(NULL)
#define getUnique(v)                                                                               \
    {                                                                                              \
        sort(v.begin(), v.end());                                                                  \
        v.erase(unique(v.begin(), v.end()), v.end());                                              \
    }
#define nl "\n"

typedef long long      ll;
typedef vector<int>    vi;
typedef vector<ll>     vl;
typedef pair<int, int> pii;
typedef pair<ll, ll>   pll;

int main() {
    faster;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
		
    }

    return 0;
}