// Created on 24-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    char c;
    cin >> c;
    if (((int) c >= 48) && ((int) c <= 57)) cout << "IS DIGIT" << endl;
    else {
        cout << "ALPHA" << endl;
        if (((int) c >= 65) && ((int) c <= 90)) cout << "IS CAPITAL" << endl;
        else cout << "IS SMALL" << endl;
    }
    return 0;
}