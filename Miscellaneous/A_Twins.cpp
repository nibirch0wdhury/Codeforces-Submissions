#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int tt;

void solve(){
    int n;
    cin >> n;
    ll sum = 0;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    sort(v.rbegin(), v.rend());
    int i = 0, asum = 0;
    for(; i < n; i++){
        if(asum > sum) break;
        asum += v[i];
        sum -= v[i];
    }
    cout << i << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    tt = 1;
    //cin >> tt;
    while(tt--){
        solve();
    }
}