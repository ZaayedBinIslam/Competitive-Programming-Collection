// Created on 10-Sep-25
//done
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'

int main() {
    faster;
    int h, w;
    cin >> h >> w;
    vector<string> arr(h + 2, string(w + 2, '.'));
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> arr[i][j];
        }
    }

    bool flag = true;
    for (int i = 1; i <=h; i++) {
        if (!flag) break;
        for (int j = 1; j <= w; j++) {
            if (arr[i][j] == '#') {
                int blacks = 0;
                if (arr[i][j - 1] == '#') blacks++; //left
                if (arr[i][j + 1] == '#') blacks++; //right
                if (arr[i - 1][j] == '#') blacks++; //up
                if (arr[i + 1][j] == '#') blacks++; //down

                if (blacks == 2 || blacks == 4) continue;

                flag = false;
                break;
            }
        }
    }

    if (!flag) cout << "No" << nl;
    else cout << "Yes" << nl;

    return 0;
}
