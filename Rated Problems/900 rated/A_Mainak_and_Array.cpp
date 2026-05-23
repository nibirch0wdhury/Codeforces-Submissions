#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    if(n == 1){
        cout << "0" << '\n';
        return;
    }
    int mx = 0;
    for(int i = 1; i < n; i++){///////
        mx = max(mx, v[i] - v[0]);
    }
    for(int i = 0; i < n-1; i++){
        mx = max(mx, v[n-1] - v[i]);
    }
    for(int i = 0; i < n-1; i++){
        mx = max(mx, v[i] - v[i+1]);
    }
    //mx = max(mx, v[n-1] - v[0]);
    cout << mx << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tt = 1;
    cin >> tt;
    while(tt--){
        solve();
    }
}