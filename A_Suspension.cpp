#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n, y, r;
    cin >> n >> y >> r;
    int ans = n - r;
    //cout << ans << " ";
    ans = ans - floor(y/2);
    //cout << ans << " ";
    if(ans<= 0){
        cout << n << '\n';
    }
    else cout << n - ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}