#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<ll>    vi;

void solve(){
    int n; cin >> n;
    vi prefixs(n), v(n);
    vector<pair <ll, ll>> a;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        a.push_back({tmp, i});
    }
    sort(all(a));
    for(int i = 0; i < n; i++){
        v[i] = a[i].first;
    }
    prefixs[0] = a[0].first;
    for(int i = 1; i < n; i++){
        prefixs[i] = a[i].first + prefixs[i-1];
    }
    // for(auto k : a) cout << k.first << " ";
    // cout << endl;
    // for(auto k : prefixs) cout << k << " ";
    // cout << endl;

    ll match = v[n-1];
    ll foundpref = prefixs[n-1];
    for(int i = n-2; i >= 0; i--){
        if(v[i] == match){
            // cout << i << endl;
            prefixs[i] = foundpref;
        }
        else{
            match = v[i];
            foundpref = prefixs[i];
        }
    }
    for(auto k : prefixs) cout << k << " ";
    cout << endl;
    for(int i = 0; i < n; i++){
        // ll k = upper_bound(all(v), prefixs[i]) - v.begin();
        // a[i].first = k - 1;

        auto lo = v.begin();
        auto hi = v.end();
        auto curr = upper_bound(lo, hi, prefixs[i]);
    }
    vi ans(n);
    for(int i = 0; i < n; i++){
        ans[a[i].second] = a[i].first;
    }
    for(int k : ans){
        if(k == -1){
            cout << 0 << " ";
            continue;
        }
        cout << k << " ";
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}