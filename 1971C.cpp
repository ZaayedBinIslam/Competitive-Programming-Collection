// Created on 10-May-24
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
        int x, y, c, d;
        cin >> x >> y >> c >> d;
        int a = min(x, y);
        int b = max(x, y);
        vi v;
        for (int i = a + 1; i < b; i++) {
            v.push_back(i);
//            cout<<i<<endl;
        }
        if ((b - a) == 1) cout << "NO" << endl;
        else {
            int flag=0;
            for (int i = 0; i < v.size(); i++) {
                if(flag==1) break;
                if (v[i] == c) {
                    for (int j = 0; j < v.size(); j++) {
                        if (v[j] == d) {
                            cout << "NO" << endl;
                            flag=1;
                            break;
                        }
                        if (j == v.size() - 1) {
                            cout << "YES" << endl;
                            flag=1;
                            break;
                        }
                    }
                } else if (v[i] == d) {
                    for (int j = 0; j < v.size(); j++) {
                        if (v[j] == c) {
                            cout << "NO" << endl;
                            flag=1;
                            break;
                        }
                        if (j == v.size() - 1) {
                            cout << "YES" << endl;
                            flag=1;
                            break;
                        }
                    }
                }else if(i==v.size()-1){cout<<"NO"<<endl;}

            }
        }

    }
    return 0;
}