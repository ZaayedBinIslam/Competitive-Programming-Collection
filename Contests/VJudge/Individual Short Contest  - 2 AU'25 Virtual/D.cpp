// Created on 04-Oct-25
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'

int main() {
    faster;
    vector<string> v;
    string s;

    getline(cin, s);
    cout << s << '\n';

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            if (s[i + 1] >= 'a') {
                continue;
            } else {
                cout << s[i];
            }
        } else {
        }
    }
    return 0;
}
