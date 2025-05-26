#include <bits/stdc++.h>
 
using namespace std;
 
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl "\n"
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
 

 
int main() {
    faster;
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;cin>>n;
        if((int)sqrt(n)!=sqrt(n)){
            cout<<-1<<endl;
        }else{
           cout<<0<<" "<<(int)sqrt(n)<<endl;
                
            
            
        }
    }
 
    return 0;
}