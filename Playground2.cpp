//بِسۡمِ اللّٰہِ الرَّحۡمٰنِ الرَّحِیۡمِ
#include<bits/stdc++.h>

using namespace std;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(3); cout.setf(ios::fixed,ios::floatfield);
#define mem(a, b) memset (a, b, sizeof(a) )

int main() {
    optimize();
    long long int t, count = 0, x, sum = 0, v = 0, k = 1, z;
    long long int binary[1000];
    string n;
    cin >> t >> n >> x;
    long long int l = n.size();
    long long int s = n.size() - 1;
    if (t == 1) {
        for (int i = 0; i < n.size(); i++) {
            if (n[i] >= '0' && n[i] <= '9') {
                n[i] = n[i] - '0';  //y = n[i] - '0' is wrong.
                //cout << n[i]+2 << " ";
            } else {
                n[i] = n[i] - '7'; //as A=10,then ascii(A)-ascii(7)=10;
                //cout << y << " ";
            }
            sum = sum + (n[i] * (pow(x, s)));
            s--;
            //cout << sum << " ";
        }
        cout << sum;
    } else if (t == 2) {
        long long v = stoll(n);
        if (v == 0) {
            cout << 0;
        } else {
            for (int i = 0; v != 0; i++) {
                z = v % x;
                binary[i] = z;
                //cout << z;
                v = v / x;
                count++;
            }
            for (int i = count - 1; i >= 0; i--) {
                cout << binary[i];
            }
        }
    }

    return 0;
}
//time 2.40;