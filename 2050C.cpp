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
//    faster;
    REDIRECT_IO;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool flag = false;

        int charSum = 0;
        for (int i = 0; i < s.size(); i++) {
            charSum += (int) (s[i] - '0');
        }
        int originalCharSum = charSum;
        if (charSum % 9 == 0) flag = true;
        else {
            for (int i = s.size() - 1; i >= 0; i--) {
                int c = (int) (s[i] - '0');
                if (c < 4) {
                    charSum = (charSum - c + (c * c));
                    if (charSum % 9 == 0) {
                        flag = true;
                        break;
                    }
                }
            }
        }
        if (!flag) {
            for (int i = 0; i < s.size(); i++) {
                int c = (int) (s[i] - '0');
                if (c < 4) {
                    originalCharSum = (originalCharSum - c + (c * c));
                    if (originalCharSum % 9 == 0) {
                        flag = true;
                        break;
                    }
                }
            }
        }


        if (flag) cout << "YES" << nl;
        else cout << "NO" << nl;

    }
    return 0;
}