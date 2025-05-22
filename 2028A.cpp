// Created on 11-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int j = 0;
        int x = 0, y = 0;
        bool flag = false;
//        cout<<s.size()<<endl;
        for (int i = 0; i < 200; i++) {

            if (s[j] == 'N') y++;
            else if (s[j] == 'S') y--;
            else if (s[j] == 'E') x++;
            else if (s[j] == 'W') x--;

            if (j == s.size()-1) j = 0;
            else j++;

            if (x == a && y == b) {
                cout << "YES" << endl;
                flag = true;
                break;
            }

        }
        if (!flag) cout << "NO" << endl;
    }
    return 0;
}