// Created on 29-Jun-24
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    ll n;
    cin >> n;
    ll arr[n];
    ll sum=0;
    for (ll i = 0; i < n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<abs(sum);
    return 0;
}