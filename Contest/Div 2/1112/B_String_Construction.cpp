#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve() {
    int n, k, ct; cin >> n >> k;
    string s = "";
    if (n - 2 < k) {
        cout << -1 << endl; return;
    }
    // if (n / 2 > k) {
    //     for (int i = 0;i < k; i++) {
    //         if (i % 2 == 0) s += "00";
    //         else s += "11";
    //     }
    //     ct = count(s.begin(), s.end(), '1');
    //     if (ct == s.size() || (ct == 0 && s.size() > 1)) {
    //         for (int i = s.size(); i < n - 1; i++) {
    //             if (s.size() == 0) s += "0";
    //             else if (s[i - 1] == '0') s += '1';
    //             else s += "0";
    //         }
    //         string p = "1";
    //         p += s;
    //         cout << p << endl; return;
    //     }
    //     for (int i = s.size(); i < n; i++) {
    //         if (s.size() == 0) s += "0";
    //         else if (s[i - 1] == '0') s += '1';
    //         else s += "0";
    //     }
    //     cout << s << endl;
    //     return;
    // }
    // else {
        int a = k / 2;
        int b = k - a;
        for (int i = 0; i <= b; i++) s += '1';
        for (int i = 0; i <= a; i++) s += '0';
        ct = count(s.begin(), s.end(), '1');
        if ((n-k)%2 == 1) {
            string p = "0";
            for (int i = 1; i < n - s.size(); i++) {
                if (p[i - 1] == '0') p += "1";
                else p += "0";
            }
            p += s;
            cout << p << endl; return;
        }
        for (int i = s.size(); i < n; i++) {
            if (s.size() == 0) s += "0";
            else if (s[i - 1] == '0') s += '1';
            else s += "0";
        }
        cout << s << endl;
        return;
    //}
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}