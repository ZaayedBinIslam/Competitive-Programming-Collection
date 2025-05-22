// Created on 01-Mar-24
//done ac
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    string s;
    cin >> s;

    int spaceNeeded = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            if (spaceNeeded > 0) {
                cout << " ";
                spaceNeeded = 0;
            }
            i += 2;
            continue;
        }
        cout << s[i];
        spaceNeeded++;
    }


    return 0;
}