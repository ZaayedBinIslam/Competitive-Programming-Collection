// Created on 14-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int a, b;
    cin >> a >> b;


    double result=100-(100*b)/(double)a;
    cout << setprecision(10) << result << endl;

    return 0;
}