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
    if ((c >= 'A') && (c <= 'Z')) cout <<(char)( c + 32) << endl;
    else cout << (char)(c - 32) << endl;

    return 0;
}