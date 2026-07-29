#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    int l = 0;
    int r = 0;
    for(int i = k-2; i >= 0; i--){
        if(a[i] != a[i+1])l++;
    }
    for(int i = k; i < n; i++){
        if(a[i] != a[i-1]) r++;
    }
    int ans = max(l, r);
    if(ans %2 != 0) ans++;
    cout << ans << '\n';
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