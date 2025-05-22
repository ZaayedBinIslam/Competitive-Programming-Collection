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
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= 10) cout<<"A["<<i<<"] = "<<a[i]<<endl;

    }
//    for (int i = 0; i < n; i++) {
//        cout<<a[i]<<" ";
//    }
    return 0;
}