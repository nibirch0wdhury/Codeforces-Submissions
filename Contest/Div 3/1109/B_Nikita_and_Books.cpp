#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve() {
    ll n; cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    ll hand = v[0] - 1;
    v[0] = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] > v[i - 1]) {
            hand += v[i] - v[i - 1] - 1;
            v[i] = v[i - 1] + 1;
        }
        else {
            ll needed = v[i - 1] - v[i] + 1;
            //cout << i << " " << needed << " " << hand << endl;
            if (needed <= hand) {
                v[i] += needed;
                hand -= needed;
            }
            else {
                no;
                return;
            }
        }

    }
    yes;

}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}