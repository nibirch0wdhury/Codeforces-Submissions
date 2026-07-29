#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    int ans = INT_MAX;
    int even = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i]%2 == 0)even++;
        if(v[i]%k == 0)ans=0;
        else ans = min(ans, k - v[i]%k);
    }
    if(k == 4 && (even == 0 || even  == 1)) cout << min(ans, 2-even)<< '\n';
    else if(k == 4 && even >= 2) cout << "0" << '\n';
    else cout << ans << '\n';
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