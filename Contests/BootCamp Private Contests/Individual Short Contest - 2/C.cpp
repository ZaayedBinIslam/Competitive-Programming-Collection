// Created on 14-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    string a, b;
    cin >> a >> b;
//    if ((a.compare(b)) < 0)
//        cout << "LESS" << endl;
//    else if ((a.compare(b)) > 0)
//        cout << "GREATER" << endl;
//    else if ((a.compare(b)) == 0)
//        cout << "EQUAL" << endl;



    if (a.length() != b.length()) {
        if (a.length() > b.length()) cout << "GREATER" << endl;
        else cout << "LESS" << endl;
    } else if (a.length() == b.length()) {
        for (int i = 0; i < a.length(); i++) {
            if (a[i] > b[i]) {
                cout << "GREATER" << endl;
                break;
            } else if (a[i] < b[i]) {
                cout << "LESS" << endl;
                break;
            } else continue;

        }
    }


    return 0;
}