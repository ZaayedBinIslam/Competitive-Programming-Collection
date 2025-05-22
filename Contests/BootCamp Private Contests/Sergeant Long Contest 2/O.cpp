// Created on 07-Mar-24
//done ac
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {

    int n;
    cin >> n;
    pair<int, int> p[n];
    map<pair<int, int>, string> mp; //can be done probably with map<map<int, int>, string> mp; structure
    for (int i = 0; i < n; i++) {
        string name;
        cin >> p[i].first >> p[i].second >> name;
        auto it = mp.find(p[i]);
        if (it != mp.end()) {
            it->second = name;
        } else mp.insert(make_pair(p[i], name));


    }
    int t;
    cin >> t;
    while (t--) {
        pair<int, int> p1;
        cin >> p1.first >> p1.second;
        auto it = mp.find(p1);
        if (it != mp.end()) cout << it->second << endl;
    }

    return 0;
}