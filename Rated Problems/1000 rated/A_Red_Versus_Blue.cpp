#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve() {
    int n, r, b; cin >> n >> r >> b;
    vector <char> v(n, 'R');
    int space = n / (b + 1);
    int givenB = 0;
    //cout << space << endl;
    for (int i = space; i < n; i += (space + 1)) {
        v[i] = 'B';
        givenB++;
    }
    int s = 0;
    while (givenB != b) {
        v[s] = 'B';
        //cout << s << endl;
        b--;
        s += (space + 1);
    }
    for (int i = 0; i < n; i++) cout << v[i];
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}