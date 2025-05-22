// Created on 25-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

bool cmp(pair<int, int> &a,
         pair<int, int> &b) {
    return (a.second < b.second);
}

int main() {

//    freopen("input.txt", "r", stdin);
    string s;
    int testCases = 0;


    while (getline(cin, s)) {

        if (testCases > 0) {
            cout << endl;
        }
        testCases++; //this condition block ensures no \n print after last case

        map<int, int> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[(int) s[i]]++;
        }

        vector<pair<int, int>> vp;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            vp.push_back(make_pair(it->first, it->second));
        }
        sort(vp.begin(), vp.end(), cmp);
        for (auto it = vp.begin(); it != vp.end(); it++) {
            cout << it->first << " " << it->second << endl;
        }


    }
    return 0;
}