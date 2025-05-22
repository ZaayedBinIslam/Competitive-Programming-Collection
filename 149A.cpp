// Created on 27-Nov-24
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
    int k;
    cin >> k;
    vi v(12);
    for (int i = 0; i < 12; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<>());
    int growth = 0, cnt = 0, i = 0;
    bool flag = true;
    while (growth < k) {
        if (i == 12) {
            flag = false;
            break;
        }
        growth += v[i++];
//        i++;
        cnt++;

    }
    if (flag)
        cout << cnt << endl;
    else
        cout << -1 << endl;

    return 0;
}