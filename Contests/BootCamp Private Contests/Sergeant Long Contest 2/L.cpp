// Created on 07-Mar-24
//hoise alhamdulillah. how i did this i dunno. done ac
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    ll n, d, count = 0, teams = 0;
    cin >> n >> d;
    vl v(n);
    for (auto &i: v) {
        cin >> i;
    }
    auto l = v.begin(), r = v.end();
    sort(v.begin(), v.end(), greater<>());

    //basically ,the algo is, sort the array in descending order.then l=largest num, then we divide d/l,
    // since we need >d to form winning team, so we take (d/l)+1 numbers from the array. so we are taking out the first
    //largest number and lowest numbers from back of the array for our team.100 90 80 70 60 50. we take 100 and 50
    // we update team count and total num count and l,r(r is how many nums are taken from arr end). now we take the
    //2nd largest and do d/l, and then take the necessary (d/l) numbers from rest of the nums available in arr end.
    //so from 90 80 70 60, d=180,l=90, (d/l)=2 nums from back, then in the next iter only 80 left and cant make a team
    // since its <d,which
    // then breaks on condition r-l<temp+1 .
    while (count != n) {
        ll temp = (d / (*l)); //l or left tracks the largest nums in sorted arr ,*l gives value on that iterator.
        if (r-l < temp + 1) break;
        count += (temp + 1);
        teams++;

        l++;
        r -= temp;
    }
    cout << teams << endl;
    return 0;
}