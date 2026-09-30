#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int q = count(s.begin(), s.end(), '?');
    // if (q == 0) {
    //     cout << 1 << endl;
    //     return;
    // }
    // else if (q == n) {
    //     cout << 4 << endl;
    //     return;
    // }

    char ar1[4] = { '1', '1', '0', '0' };
    char ar2[4] = { '1', '0', '0', '1' };
    char ar3[4] = { '0', '0', '1', '1' };
    char ar4[4] = { '0', '1', '1', '0' };

    int k = 4;
    for (int i = 0; i < n; i++) {
        if (s[i] == '?')continue;
        else if (s[i] != ar1[i % 4]) {
            k--;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '?')continue;
        else if (s[i] != ar2[i % 4]) {
            k--;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '?')continue;
        else if (s[i] != ar3[i % 4]) {
            k--;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '?')continue;
        else if (s[i] != ar4[i % 4]) {
            k--;
            break;
        }
    }
    cout << k << endl;
}
// ??1?????1
// ???? -> 4 !!
// x?x -> 0
// xxxxx -> 1 !!
// ??xx?? -? 2

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}