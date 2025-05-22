// Created on 05-May-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n;
    string s;
    cin >> n >> s;
//    int sz = (int) s.length();
    int a[26] = {0};//initialize all elements with 0 :)

    for (int i = 0; i < n; i++) {
        a[(int) s[i] - 97]++;
    }


    for (int i = 0; i <= 25; i++) {

        while (a[i] != 0) {
            cout << (char) (i + 97);
            a[i]--;
        }
    }
    return 0;
}