// Created on 30-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    string s;
    cin >> s;
    int sz = (int) s.length();

    for (int i = 0; i < sz; i++) {

        if (s[i] == ',') s[i] = ' ';
        else if (isupper(s[i])) s[i] = tolower(s[i]);
        else s[i] = toupper(s[i]);
    }
    cout << s << endl;

    return 0;
}

//the code below works too
//char change_case(char c) {
//    if (std::isupper(c))
//        return std::tolower(c);
//    else
//        return std::toupper(c);
//}
//
//int main() {
//    string str;
//    cin >> str;
//    transform(str.begin(), str.end(), str.begin(), change_case);
//    cout << str;
//    return 0;
//}