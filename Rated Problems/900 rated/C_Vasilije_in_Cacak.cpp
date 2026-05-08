#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    ll n, k, x;
    cin >> n >> k >> x;

    ll a = n - k;
    ll maxx = (n*(n+1) - a*(a+1))/2;
    ll minx = k*(k+1)/2;
    // cout << maxx << " " << x; 
    if(maxx >= x && minx <= x) cout << "YES" << '\n';
    else cout << "NO" << '\n';

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tt = 1;
    cin >> tt;
    while(tt--){
        solve();
    }
}