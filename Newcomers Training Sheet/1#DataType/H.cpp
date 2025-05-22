// Created on 24-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    double a, b;
    cin >> a >> b;
    double c = a / b;
    cout << "floor " << a << " / " << b << " = " << floor(c) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(c) << endl; //(a+b-1)/b works too instead of ceil fn
    cout << "round " << a << " / " << b << " = " << round(c) << endl;
    return 0;
}