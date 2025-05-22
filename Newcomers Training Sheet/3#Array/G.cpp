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
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll l=0,r=n-1;
    bool isPalindrome=true;
    while(l<r){
        if(a[l]!=a[r]){
            isPalindrome= false;
            break;
        }
        else{
            l++;
            r--;
        }
    }
    if(isPalindrome) cout<<"YES";
    else cout<<"NO";

    return 0;
}