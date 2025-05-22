// Created on 09-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define nl '\n'
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)

int main() {
    faster;
    int t;
    cin >> t;
    int cnt = 1;
    while (t--) {
        ll n;
        int p;
        cin >> n >> p;




        if ((n % 2 == 0) && (ll) floor(n / 2) % 2 == 0 && p == 1) {

        } else if ((n % 2 == 0) && (ll) floor(n / 2) % 2 == 1 && p == 1) {
            cout << "Case " << cnt << ": Oddius" << nl;

        } else if ((n % 2 == 0) && (ll) floor(n / 2) % 2 == 0 && p == 2) {

        } else if ((n % 2 == 0) && (ll) floor(n / 2) % 2 == 1 && p == 2) {
            cout << "Case " << cnt << ": Oddius" << nl;

        } else if ((n % 2 == 1) && (ll) floor(n / 2) % 2 == 0 && p == 1) {

        } else if ((n % 2 == 1) && (ll) floor(n / 2) % 2 == 1 && p == 1) {

        } else if ((n % 2 == 1) && (ll) floor(n / 2) % 2 == 0 && p == 2) {

        } else if ((n % 2 == 1) && (ll) floor(n / 2) % 2 == 1 && p == 2) {

        }
        cnt++;
//        while (true) {
//            if (n <= 0) {
//                if (p == 1) cout << "Case " << cnt << ": Oddius" << nl;
//                else if (p == 2) cout << "Case " << cnt << ": Oddius" << nl;
//                break;
//            }
//            if ((n % 2 == 0) && p == 1) {
//                if ((ll) floor(n / 2) % 2 == 0) {
//                    n = n - ((n / 2) - 1);
//
//                } else if ((ll) floor(n / 2) % 2 == 1) {
//                    n = n - (n / 2);
//
//                }
//                cnt++;
//                p = 2;
//
//            } else if ((n % 2 == 0) && p == 2) {
//                if ((ll) floor(n / 2) % 2 == 0) {
//                    n = n - ((n / 2) - 1);
//
//                } else if ((ll) floor(n / 2) % 2 == 1) {
//                    n = n - (n / 2);
//
//                }
//
//                cnt++;
//                p = 1;
//            } else if ((n % 2 == 1) && p == 1) {
//
//                cnt++;
//                p = 2;
//            } else if ((n % 2 == 1) && p == 2) {
//
//                cnt++;
//                p = 1;
//            }
//        }
//        if((n%2==0)&&p==2 ){
//            cout<<"Case "<<cnt<<": Oddius"<<nl;
//        }else if((n%2==1)&&p==1){
//            cout<<"Case "<<cnt<<": Evenius"<<nl;
//        }
    }
    return 0;
}