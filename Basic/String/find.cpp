// Created on 17-Sep-25
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "uohhh";
    string sub = "hh";

    int pos = s.find(sub);
    cout << s.find(sub) << endl;

    cout << pos << endl;
    string temp = s.substr(pos, 4);
    cout<<temp.size()<<endl;

    cout << temp.find(sub,2) << endl;

    // s.find(sub, position); find sub after position(inclusive)

    cout << s.find(sub, pos+2);

    return 0;
}
