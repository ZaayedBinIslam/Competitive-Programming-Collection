// Created on 29-Jun-24
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if(n%i==0) cout<<i<<endl;
    }
    return 0;
}