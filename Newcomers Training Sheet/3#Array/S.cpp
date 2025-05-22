// Created on 30-Jun-24
//
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n,m;
    cin >> n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(x==a[i][j]) {
                cout<<"will not take number";
                return 0;
            }
        }
    }
    cout<<"will take number";
    return 0;
}