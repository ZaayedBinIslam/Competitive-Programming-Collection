#include <bits/stdc++.h>
using namespace std;

int countDigit(int num) {
    return to_string(num).length();
}

vector<pair<int, int>> primeFactors(int n) {
    vector<pair<int, int>> factors;
    int count = 0;
    while (n % 2 == 0) {
        count++;
        n = n / 2;
    }
    if (count > 0) {
        factors.push_back({2, count});
    }


    for (int i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count > 0) {
            factors.push_back({i, count});
        }
    }


    if (n > 2) {
        factors.push_back({n, 1});
    }

    return factors;
}

int f(int x) {
    vector<pair<int, int>> factors = primeFactors(x);
    int sum = 0;
    for (auto &factor : factors) {
        sum += countDigit(factor.first) + countDigit(factor.second);// 2,10
    }
    return sum;
}

bool compare(int a, int b) {
    int fa = f(a);
    int fb = f(b);
    if (fa == fb) return a < b;
    return fa > fb;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }
        sort(arr.begin(), arr.end(), compare);
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}