#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n, m, k, mxaloc; cin >> n >> m >> k;
    if(n >= k){
        cout << k << endl;
        return;
    }
    k -= n;
    m -= 1;
    if(m % 2 == 0){
        mxaloc = m;
    }
    else{
        mxaloc = m-1;
    }
    k/mxaloc
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}