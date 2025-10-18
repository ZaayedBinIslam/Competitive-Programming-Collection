// Created on 13-May-24
//
#include <bits/stdc++.h>
using namespace std;

typedef long long   ll;
typedef vector<int> vi;
typedef vector<ll>  vl;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto& c : s) {
            mp[c]++;
        }
        int a = 0, b = 0;
        for (auto& u : mp) {
            if (u.second == 1)
                a++;
            else {
                a++;
                b++;
            }
        }
        cout << a + b << endl;
    }
    return 0;
}