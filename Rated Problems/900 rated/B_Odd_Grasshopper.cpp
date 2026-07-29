#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    ll x, n;
    cin >> x >> n;
    ll ans;
    if(x % 2){
        ll num = n%4;
        // if(num == 0)ans = 1;
        // else if(num == 1)ans = n+1;
        // else if(num == 2)ans = 0;
        // else if(num == 3)ans = -1*n;
        if(num == 0)ans = 0;
        else if(num == 1)ans = n;
        else if(num == 2)ans = -1;
        else if(num == 3)ans = -1*n - 1;
    }
    else{
        ll num = n%4;
        if(num == 0)ans = 0;
        else if(num == 1)ans = -1*n ;
        else if(num == 2)ans = 1;
        else if(num == 3)ans = n+1;
    }
    cout << ans + x << '\n';
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