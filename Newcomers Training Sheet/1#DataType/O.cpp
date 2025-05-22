// Created on 24-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '+')cout << a + b << endl;
    else if (c == '-')cout << a - b << endl;
    else if (c == '*')cout << a * b << endl;
    else if (c == '/')cout << (int)(a / b) << endl;
    return 0;
}