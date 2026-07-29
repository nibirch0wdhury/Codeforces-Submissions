#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

// n== 1,2 check 

void solve(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int mn = -1;
    for(int i = 0; i < n - 1; i++){
        if(v[i] > v[i+1]){
            int k = v[i] - v[i+1];
            mn = max(v[i] - v[i+1], mn);
        }
    }
    for(int i = 0; i < n - 1; i++){
        if(v[i] > v[i+1]){
            v[i+1] += mn;
        }
    }
    for(int i = 0; i < n - 1; i++){
        if(v[i] > v[i+1]){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';

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