// Created on 03-Dec-24
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int happy = 0;
        int sum = 0;

        vi vs;
        vs.push_back(1);
        int x = 1;
        int s = 1;
        for (int i = 1; i < 1000 * 100; i++) {
            s += (x * 4) + 4;
            x+=2;
            vs.push_back(s);
        }
//        cout << s << nl;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            for (int j = 0; j < (int) vs.size(); j++) {
                if (sum == vs[j]) happy++;
                if (vs[j] > sum) break;
            }
        }
        cout << happy << nl;
    }

    return 0;
}