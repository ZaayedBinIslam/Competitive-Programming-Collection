// Created on 14-Nov-24
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

int main() {
    faster;
    int t, n;
    cin >> n >> t;
    cout << (int) floor(n * t) / 2 << endl;


    return 0;
}