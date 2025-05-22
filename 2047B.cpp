// Created on 03-Dec-24
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
        string s;
        cin >> s;
        if (n == 1) cout << s << nl;
        else {
            map<char, int> mp;
            for (int i = 0; i < n; i++) {
                mp[s[i]]++;
            }
            char maxChar, minChar;
            int max = 0;
            int min = INT_MAX;

            for (auto &m: mp) {
                if (m.second > max) {
                    max = m.second;
                    maxChar = m.first;
                }
            }
            for (auto &m: mp) {
                if (m.second < min && m.first != maxChar) {
                    min = m.second;
                    minChar = m.first;
                }

            }
//            cout << maxChar << nl;
//            cout << minChar << nl;

            for (int i = 0; i < n; i++) {
                if (s[i] != maxChar) {
                    if (s[i] == minChar) {
                        swap(s[i], maxChar);
                        break;
                    }
                }
            }
            cout << s << nl;
        }
    }
    return 0;
}