// Created on 26-Nov-24
//done
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
    sort(s.begin(), s.end());
    int cntA = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a') cntA++;
        else break;
    }
//    cout<<cntA<<" "<<s.size()<<nl;
    if (cntA >( s.size() / 2)) cout << s.size() << nl;
    else cout << (2*cntA )- 1 << nl;
    return 0;
}