#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int tt;
void solve(){
    ll n, k;
    cin >> n >> k;
    if(n%2 == 0){
        if(n/2 >= k) cout << k*2 -1;
        else cout << (k - (n/2))*2;
    }
     else{
         if(n/2+1>= k) cout << k*2 -1;
        else cout << (k - (n/2) -1)*2;
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    tt = 1;
    //cin >> tt;
    while(tt--){
        solve();
    }
}