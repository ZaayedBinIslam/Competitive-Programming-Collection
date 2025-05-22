// Created on 02-Nov-24
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
        int n, k;
        cin >> n >> k;
        vi vb(k);
        vi vc(k);
        map<int, int> mp;
        for (int i = 0; i < k; i++) {
            cin >> vb[i] >> vc[i];
            mp[vb[i]] += vc[i];
        }
        vi totals;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            totals.push_back(it->second);
        }
        sort(totals.begin(), totals.end(), greater<>());
        int max = 0, i = 0;
//        while (n--) {
//            max += totals[i];
//            i++;
//        }
        for (int j = 0; j < totals.size(); j++,n--) {
            if(n==0) break;
            max += totals[j];
//            n--;
        }

        cout << max << endl;

    }
    return 0;
}