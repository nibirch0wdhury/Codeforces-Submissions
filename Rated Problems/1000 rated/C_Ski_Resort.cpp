#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve() {
    ll n, k, q;
    cin >> n >> k >> q;
    vector <ll> v(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] <= q) v[i] = 1;
        else v[i] = 0;
    }
    
    vector<ll> cons;
    ll count = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 1) count++;
        else if (count != 0){
            cons.push_back(count);
            count = 0;
        } 
    }
    if (count != 0) cons.push_back(count);

    // for (ll i : cons) cout << i << " ";
    // cout << endl;
    ll sum = 0;
    for (int i : cons) {
        if (i >= k) {
            ll add = i + 1 - k;
            add = add * (add + 1);
            add = add / 2;
            sum += add;
        }
    }
    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}