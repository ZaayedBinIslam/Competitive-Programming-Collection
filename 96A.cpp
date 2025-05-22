// Created on 11-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

int main() {
    string s;
    cin >> s;

    auto find0 = s.find("0000000");
    auto find1 = s.find("1111111");

    if (find0 != string::npos) cout << "YES" << endl;
    else if (find1 != string::npos) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}