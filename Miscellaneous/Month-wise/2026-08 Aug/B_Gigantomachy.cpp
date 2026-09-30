#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n, m; cin >> n >> m;
    vector <int> a(n), b(m);
    for(int &k : a) cin >> k;
    for(int &k : b) cin >> k;
    if(n+a[0] >= m+b[0])cout << 1 << endl;
    else cout << 2 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}