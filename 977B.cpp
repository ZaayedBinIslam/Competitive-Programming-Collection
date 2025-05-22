// Created on 23-Nov-24
//done
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'

bool cutomComparatorMap(const pair<string , int> &p1, const pair<string, int> &p2) {
    return p1.second < p2.second;
}

//auto pr = std::max_element(map.begin(), map.end(), [](const auto &x, const auto &y) {
//    return x.second < y.second;
//}); this is better.cause lambda and also auto type variable without hassles


int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j <= s.size(); j++) {
            if ((j - i) == 2) {
                string s1 = s.substr(i, j - i);
                mp[s1]++;
            }
        }
    }
    auto x = max_element(mp.begin(), mp.end(),cutomComparatorMap);
    cout<<x->first<<endl;

    return 0;
}