// Created on 06-May-24
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
        int a, b, c;
        cin >> a >> b >> c;
        if(a<b && b<c) cout<<"STAIR"<<endl;
        else if(a<b &&b>c)cout<<"PEAK"<<endl;
        else cout<<"NONE"<<endl;
    }
    return 0;
}