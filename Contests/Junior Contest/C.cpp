// Created on 30-Apr-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int primeFactors(int n) {
    //int digits = (int) log10(n) + 1;
    int digitTotalFirstFX = 0;
    int digitTotalSecondFX = 0;
    int uniqueCount = 0;

    while (n % 2 == 0) {
        digitTotalFirstFX++;//since its 2 only
        uniqueCount++;
        n = n / 2;
    }
    if (uniqueCount > 0) digitTotalSecondFX += uniqueCount;


    for (int i = 3; i <= sqrt(n); i = i + 2) {
        uniqueCount = 0;
        while (n % i == 0) {
            int digits = (int) log10(i) + 1;
            digitTotalFirstFX += digits;
            uniqueCount++;
            n = n / i;
        }
        if (uniqueCount > 0) digitTotalSecondFX += uniqueCount;
    }

    if (n > 2) {
        int digits = (int) log10(n) + 1;
        digitTotalFirstFX += digits;
        digitTotalSecondFX++;
    }
    return digitTotalFirstFX + digitTotalSecondFX;

}

bool compare(int a, int b) {
    int fxa = primeFactors(a);
    int fxb = primeFactors(b);
    if (fxa == fxb) return a < b;
    return fxa > fxb;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n);
        vi vFactors;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            //int fx = primeFactors(v[i]);
            //vFactors.push_back(fx);
        }
        sort(v.begin(), v.end(), compare);

        for (int num: v) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}