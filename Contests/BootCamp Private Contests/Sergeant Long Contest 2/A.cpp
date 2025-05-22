// Created on 07-Mar-24
//done ac
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int q;
            map<string, int> mp;
    cin >> q;
    while (q--) {
        int type;
        string name;
        int marks;
        cin >> type;
        switch (type) {
            case 1: {
                cin >> name >> marks;
                auto it = mp.find(name);
                if (it != mp.end()) {
                    it->second += marks;
                } else mp.insert(make_pair(name, marks));
                break;
            }

            case 2:
                cin >> name;
                mp.erase(name);
                break;

            case 3:
                cin >> name;
                auto it = mp.find(name);
                if (it != mp.end()) cout << it->second << endl;
                else cout << 0 << endl;
                break;

        }
    }
    return 0;
}