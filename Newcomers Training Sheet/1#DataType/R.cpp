// Created on 25-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n;
    cin >> n;
    int year, month, day;
    year = n / 365;
    month = (n - (year * 365)) / 30;
    day = (n - (year * 365) - (month * 30));
    cout << year << " years" << endl << month << " months" << endl << day << " days" << endl;

    return 0;
}