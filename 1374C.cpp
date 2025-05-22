// Created on 16-Nov-24
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int i = 0;
        while (true) {
            bool flag = false;
            if (s[i] == '(') {
                for (int j = i; j < s.size(); j++) {
                    if (s[j] == ')') {
                        s.erase(s.begin() + i);
                        s.erase(s.begin() + j - 1);
                        flag = true;
                        i = 0;
                        break;
                    }
                }
            }
            if (!flag) i++;
            if (i == s.size()) break;

        }
        cout << s.size() / 2 << endl;
    }
    return 0;
}
