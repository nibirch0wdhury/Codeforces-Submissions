#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n, k, a;
    cin >> n >> k;
    vector <int> v;
    vector <int> d;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    d[0] = 0;
    sort(v.begin(), v.end());
    for(int i = 1; i < n; i++){
        d[i] = v[i] - v[i-1];
    }
    for(int i = 0; i < d.size(); i++) cout << d[i] << " ";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}