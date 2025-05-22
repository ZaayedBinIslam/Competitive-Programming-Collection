#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main() {
    faster;
    int n;
    cin >> n;
    int money = 0;
    int mini = 101; // cause price range is <100
    for (int i = 0; i < n; i++) {
        int a, p;
        cin >> a >> p;
        mini = min(mini, p);
        money += mini * a;

    }
    cout << money << endl;

    return 0;
}