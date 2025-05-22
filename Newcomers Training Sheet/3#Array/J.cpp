// Created on 29-Jun-24
//not done yet
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    ll freq[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll min = 0;
    for (ll i = 0; i < n; i++) {
        if (freq[i] < min) min = freq[i];
    }
    if(min%2==0) cout<<"Unlucky";
    else cout<<"Lucky";
    return 0;
}