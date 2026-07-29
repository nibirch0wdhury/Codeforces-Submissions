#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve() {
    int n; char c; string s;
    cin >> n >> c >> s;
    if (c == 'g') {
        cout << 0 << endl;
        return;
    }
    vector <int> gcount(n + 1, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'g') gcount[i + 1] = gcount[i] + 1;
        else gcount[i + 1] = gcount[i];
    }
    int mx = 0;
    int firstg = upper_bound(gcount.begin(), gcount.end(), 0) - gcount.begin();
    for (int i = 0; i < n; i++) {
        if (s[i] == c) {
            int l = i + 1, r = n - 1, curcnt = gcount[i + 1];
            if (upper_bound(gcount.begin()+i, gcount.end(), curcnt) != gcount.end()) {
                int mc = upper_bound(gcount.begin()+i, gcount.end(), curcnt) - gcount.begin() - i -1;
                mx = max(mx, mc);
                //cout << i << " " << mc  << " "<< curcnt << endl;
            }
            else{
                mx = max(mx, n-i+firstg-1);
            }
        }
    }
    cout << mx << endl;

    // for(int k: gcount) cout << k << " ";
    // cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}