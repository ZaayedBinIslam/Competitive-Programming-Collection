// Created on 30-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    string s;
    cin >> s;
    int sz = (int) s.length();
    int a[26]={0};//initialize all elements with 0 :)

    for (int i = 0; i < sz; i++) {
        a[(int) s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++) {
        char c = (char)(i +97);
        if (a[i] > 0) cout << c << " : " << a[i] << endl;
//        cout << c << " : " << a[(int) s[i] - 97] << endl;
    }


    return 0;
}