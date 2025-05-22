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
        int n;
        cin >> n;
        vi a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int happy = 0;
        for (int i = 0; i < n; i++) {
//            if ( || b[i] * 2 > a[i])
//                happy++;
                if(a[i]>b[i]){
                    if(a[i] < b[i]*2) happy++;
                }else if(a[i]<b[i]){
                    if(a[i]*2 > b[i]) happy++;
                }
        }
        cout << happy << endl;


    }
    return 0;
}