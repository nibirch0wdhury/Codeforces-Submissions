#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    ll n, c, sa = 0, sb = 0, dd = 0; cin >> n >> c;
    vector <int> a(n), b(n);
    for(int &k: a) {
        cin >> k;
        sa += k;
    }
    for(int &k: b){
        cin >> k;
        sb += k;
    }
    for(int i = 0; i < n; i++){
        dd += (a[i] - b[i]);
        //cout << a[i] <<"  " << b[i] << endl;
        if(a[i] < b[i]){
            dd = INT_MAX;
            break;
        }
    }
    if(sb > sa) {
        cout << -1 << endl;
        return;
    }
    
    cout << min(c + (sa - sb), dd) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}