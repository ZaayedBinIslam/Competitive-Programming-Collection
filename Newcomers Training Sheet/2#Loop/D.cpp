// Created on 25-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int x = 1999;

    while (1) {
        int pass;
        cin >> pass;
        if (pass == x) {
            cout << "Correct" << endl;
            break;
        } else cout << "Wrong" << endl;
    }
    return 0;
}