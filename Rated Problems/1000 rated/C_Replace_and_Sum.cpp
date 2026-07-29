#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

// const int N = 10e5 + 5;
// int table[N][18];

// int sparse(int l, int r) {
//     int len = r - l + 1;
//     int k = 31 - __builtin_clz(len);
//     return max(table[l][k], table[r - (1 << k) + 1][k]);
// }

void solve() {
    int n, q; cin >> n >> q;
    vector <int> a(n);
    vector <int> b(n);
    vector <int> c(n+1);
    for(int &c : a) cin >> c;
    for(int &c : b) cin >> c;
    for(int i = 0;i < n; i++) if(a[i] < b[i]) a[i] = b[i];
    for(int i = n-1; i >= 1; i--) if(a[i] > a[i-1]) a[i-1] = a[i];
    c[0] = 0;
    for(int i = 0; i < n; i++) c[i+1] = c[i] + a[i];
    // for(int i = 0; i < n; i++) table[i][0] = a[i];
    // for(int i = 1; i < n; i++){
    //     a[i] = a[i] + a[i-1];
    // }
    // for(int k = 1; k < 17; k++){
    //     for(int i = 0; i + (1 << k) - 1 < n; i++){
    //         table[i][k] = max(table[i][k], table[i+(i<<(k-1))][k-1]);
    //     }
    // }
    // for(int k : c) cout << k << " ";
    // cout << endl;
    while(q--){
        int l, r; cin >> l >> r;
        cout << c[r] - c[l-1] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}