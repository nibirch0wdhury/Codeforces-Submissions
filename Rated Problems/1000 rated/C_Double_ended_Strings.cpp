#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve() {
    string a, b; cin >> a >> b;
    int ans = a.size() + b.size();
    for (int i = 0; i < a.size(); i++) {
        for (int j = 1; j <= a.size()-i; j++) {
            string sub = a.substr(i, j);
            if (b.find(sub) != string::npos) {
                int k = (a.size() - sub.size()) + (b.size() - sub.size());
                //if(k < ans) cout << sub << endl;
                ans = min(k, ans);
            }
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}