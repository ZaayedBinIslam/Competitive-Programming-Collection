// Created on 07-Mar-24
//

// Created on 07-Mar-24
//done ac
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int q;
    set<int> s;
    cin >> q;
    while (q--) {
        int y;
        int x;
        cin >> y;
        switch (y) {
            case 1:
                cin >> x;
                s.insert(x);
                break;

            case 2: {
                cin >> x;
                auto it = s.find(x);
                if (it != s.end()) s.erase(x);
                break;
            }
            case 3:
                cin >> x;
                auto it = s.find(x);
                if (it != s.end()) cout << "Yes" << endl;
                else cout << "No" << endl;


        }
    }
    return 0;
}