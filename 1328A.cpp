// Created on 25-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'

int main() {
faster;
    int t;
    cin >> t;
    while (t--) {
        ll a,b;cin>>a>>b;
        if(a%b==0) cout<<0<<nl;
        else {
            if(a>b) {
                cout<<(b*((a/b)+1))-a<<nl;
            }
            else cout<<b-a<<nl;
        }


    }
    return 0;
}
