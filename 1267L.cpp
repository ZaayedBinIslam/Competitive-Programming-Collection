// Created on 22-Nov-24
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
    int n, l, k;
    cin >> n >> l >> k;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> words(n);
    int index = 0;
    for (int position = 0; position < l; position++) {
        for (int i = 0; i < n; i++) {
            if (words[i].size() == position) {
                words[i] += s[index];
                index++;
            }
        }
        sort(words.begin(), words.begin() + k);
    }
    for (auto &v: words) {
        cout << v << nl;
    }
    return 0;
}