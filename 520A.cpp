// Created on 10-Nov-24
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
    string str;
    cin >> str;


    if (t < 26) cout << "NO" << endl;
    else {
        for (int i = 0; i < t; i++) {
            str[i] = tolower(str[i]);
        }
        getunique(str);
        if (str.size() < 26)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}