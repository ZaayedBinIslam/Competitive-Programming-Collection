// Created on 11-Jul-24
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h,x,y;
        cin>>h>>x>>y;
        int h2=h-y;
        int atks;
        if(h2%x==0) {
            atks=h2/x;
            cout << atks + 1 << endl;
        }else {
            atks=h2/x;
            cout << atks + 1 + 1 << endl;
        }
    }
    return 0;
}