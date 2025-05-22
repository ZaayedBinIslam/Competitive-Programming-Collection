// Created on 14-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<pair<int, int>> v(2);
    v[0].first = a;
    v[1].first = c;
    v[0].second = b;
    v[1].second = d;
    sort(v.begin(), v.end());
//    cout<<"Test"<<endl;
    int result;
    result = v[1].second - v[0].first;

    cout << result << endl;
//    cout<<"Test"<<endl;

    return 0;
}