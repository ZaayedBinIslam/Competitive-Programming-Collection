//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
//basically just get unique members in set and print 4-member in set since we know n==4;

int main() {
    set<ll> s;
    for (int i = 0; i < 4; i++) {
        ll x;
        cin >> x;
        s.insert(x);
    }
    cout << 4 - s.size() << endl;
    return 0;
}