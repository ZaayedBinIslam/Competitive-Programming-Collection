// Created on 10-May-24
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
        int x,y;
        cin>>x>>y;
        if(x>y) cout<<y<<" "<<x<<endl;
        else cout<<x<<" "<<y<<endl;
    }
    return 0;
}