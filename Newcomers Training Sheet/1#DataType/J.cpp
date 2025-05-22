// Created on 24-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        if (a % b == 0)cout << "Multiples" << endl;
        else cout << "No Multiples" << endl;
    } else {
        if (b % a == 0)cout << "Multiples" << endl;
        else cout << "No Multiples" << endl;
    }
    return 0;
}