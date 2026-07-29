#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve() {
    int n, x, y, z; cin >> n >> x >> y;
    z = abs(x-y);
    if(z == 0) z = 1;
    vector <int> v(n + 1);
    for (int i = 1; i <= n; i++)cin >> v[i];
    for (int i = 1; i <= n; i++) {
        int dist = abs(v[i] - i);
        //cout << dist << " ";
        if(dist % x % y % z == 0 || dist % y % x % z== 0) continue;
        else no;return;
    }
    yes;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}