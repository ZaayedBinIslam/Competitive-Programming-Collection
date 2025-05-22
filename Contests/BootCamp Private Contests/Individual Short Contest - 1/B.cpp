// Created on 09-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    if(n*a<b ) cout<<n*a<<endl;
    else if(n*a==b) cout<<n*a<<endl;
    else cout<<b<<endl;
    return 0;
}