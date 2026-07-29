#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

ll calc(ll s){
    ll k, tm; cin >> k;
    set <ll> st;
    for(int i = 0; i < k; i++){
        cin >> tm;
        st.insert(tm);
    }
    ll small = *st.begin();
    auto it = st.end();
    it--;
    ll big = *it;
    return (big-small)*s*1LL;
}
void solve(){
    int w, h; cin >> w >> h;
    ll mx = 0;
    mx = max(calc(h), mx);
    mx = max(calc(h), mx);
    mx = max(calc(w), mx);
    mx = max(calc(w), mx);
    cout << mx << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}