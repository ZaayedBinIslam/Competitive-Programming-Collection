// Created on 29-Jun-24
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        for (int j = 0; j < i; j++) {
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}