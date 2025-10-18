// Created on 06-Oct-25
//done
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
    string s;
    cin >> s;
    int n = s.length();
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9' ) {
            cout << "YES" << endl;
            flag = true;
            break;
        }
    }
    if (!flag)cout << "NO" << endl;
    return 0;
}
