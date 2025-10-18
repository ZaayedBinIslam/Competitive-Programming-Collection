// Created on 04-Oct-25
// vjudge to cf transfer
//done
//1676F
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define nl '\n'

int main() {
  faster;
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    set<int> s;
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      freq[x]++;
      s.insert(x);
    }
    int l, r;
    bool lFound = false;
    vector<pair<int, int> > maxP;
    int bfr;

    for (auto i = s.begin(); i != s.end(); i++) {
      int num = *i;
      if (lFound) {
        if (freq[num] >= k && (bfr + 1 == num)) {
          r = num;
          maxP.push_back(make_pair(l, r));
          bfr++;
        } else
          lFound = false;
      }
      if (lFound == false && freq[*i] >= k) {
        lFound = true;
        l = num;
        r = num;
        maxP.push_back(make_pair(l, r));
        bfr = num;
      }
    }

    int mx = -1;
    int lmx, rmx;
    for (auto u : maxP) {
      if (u.second - u.first > mx) {
        mx = u.second - u.first;
        lmx = u.first;
        rmx = u.second;
      }
    }
    if (maxP.size() == 0) {
      cout << -1 << nl;
    } else {
      cout << lmx << " " << rmx << endl;
    }
  }
  return 0;
}
