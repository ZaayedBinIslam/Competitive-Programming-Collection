// Created on 28-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#ifndef ONLINE_JUDGE
#define REDIRECT_IO \
    freopen("input.txt", "r", stdin);   \
    freopen("output.txt", "w", stdout); \
    freopen("error.txt", "w", stderr);
#else
#define REDIRECT_IO
#endif


#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'


int main() {
    faster;
    REDIRECT_IO;
    string s;
    cin >> s;
    int i = s.size() - 1;
    bool flag = true;
    while (true) {
        if (s[i] == '.')break;
        if (s[i] == '0') {
            i--;
        } else {
            flag = false;
            break;
        }
    }
    if(flag) cout<<"Integer"<<nl;
    else cout<<"Float"<<nl;
    return 0;
}