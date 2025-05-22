// Created on 06-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int a, b;
    cin >> a >> b;
    int years = 0;
    while (true) {
        if (a > b) break;
        a *= 3;
        b *= 2;
        years++;
    }
    cout << years << endl;
    return 0;
}