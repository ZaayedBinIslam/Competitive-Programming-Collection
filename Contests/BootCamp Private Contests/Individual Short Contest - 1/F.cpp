// Created on 09-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int t = 8;
//    cin >> t;
    int i = 100;
    while (i < 1000) {
        if (i % 8 == 0)cout << i << " ";
        i++;
    }
    return 0;
}