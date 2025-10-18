// Created on 05-Oct-25
//
#include <bits/stdc++.h>

using namespace std;

typedef long long   ll;
typedef vector<int> vi;
typedef vector<ll>  vl;

#define faster                                                                                     \
    ios_base::sync_with_stdio(false);                                                              \
    cin.tie(NULL)

#define getUnique(v)                                                                               \
    {                                                                                              \
        sort(v.begin(), v.end());                                                                  \
        v.erase(unique(v.begin(), v.end()), v.end());                                              \
    }

#define nl '\n'

int main() {
    faster;
    int n;
    cin >> n;
    if (n % 5 == 0) {
        cout << n / 5 << endl;
    } else
        cout << (n / 5) + 1 << endl;
    return 0;
}
