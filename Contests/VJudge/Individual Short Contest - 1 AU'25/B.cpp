// Created on 25-Sep-25
//done
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
    int x,y;
    cin>>x>>y;
    if (x>=2*y) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
