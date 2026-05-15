#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout << "NO" << '\n';

void solve(){
    int n, q;
    cin >> n >> q;
    vector <int> v(n);
    vector <long long> s;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    s.push_back(0);
    s.push_back(v[0]);
    for(int i = 2; i <= n; i++){
        s.push_back(s[i-1] + v[i-1]);
    }
    // for(int i : s) {
    //     cout << i << " ";
    // }
    // cout <<endl;

    for(int i = 0; i < q; i++){
        int l, r, k;
        cin >> l >> r >> k;
        long long right = s[n] - s[r];
        long long left = s[l-1];
        long long ans = left + right + k*(r-l+1);
        //cout << ans << '\n';
        if(ans%2 == 0) no
        else yes
    }
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