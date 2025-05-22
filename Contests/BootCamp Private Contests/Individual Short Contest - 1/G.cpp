// Created on 09-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


bool cmp(pair<int, ll> &a,
         pair<int, ll> &b)
{
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;map<int, int> mp1;
    map<int, ll> mp2;

    for (auto i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp1[x]++;
    }
//    for (auto it = mp1.begin(); it != mp1.end(); it++) {
//        mp2[it->first] = it->first * it->second;
//    }
    vector<pair<int, ll> > v;
    for (auto &it : mp1) {
        v.push_back({it.first,it.first*it.second});
    }
    sort(v.rbegin(),v.rend(),cmp);
    ll points=0;
    for(ll i = 0; i < n; i++){
        v[0].first
    }

    return 0;
}