// Created on 03-Sep-25
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cost = 1;
        int cons = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                cons = 1;
            } else cons++;
            cost = max(cost, cons);
        }
        cout << cost + 1 << nl;
    }


    return 0;
}
