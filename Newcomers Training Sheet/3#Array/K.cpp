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
    char s[n];
    ll sum=0;
    for (int i = 0; i < n; i++) {
        cin>>s[i];
        int m = (int)s[i]-48;
        sum+=m;
    }

    cout << sum;
    return 0;
}