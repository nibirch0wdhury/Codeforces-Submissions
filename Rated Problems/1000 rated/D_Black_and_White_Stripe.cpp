#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve() {
    //bla bla black sheep
    string s;
    int n, k; cin >> n >> k >> s;
    int b = 0, w = 0;
    if (k == 1) {
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                cout << 0 << endl;
                return;
            }
        }
        cout << 1 << endl;
        return;
    }
    for (int i = 0; i < k; i++) {
        if (s[i] == 'B') b++;
        else w++;
    }
    int ans = w;
    if (b == k) {
        cout << 0 << endl;
        return;
    }
    int j = 0;
    for (int i = k; i < n; i++, j++) {
        if (s[i] == 'B')b++;
        else w++;

        if (s[j] == 'B')b--;
        else w--;

        ans = min(ans, w);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}