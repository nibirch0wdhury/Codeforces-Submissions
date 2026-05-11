#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int a, b, n;
    cin >> a >> b >> n;
    ll total = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        total += min(a-1, x);
    }

    cout << total + b  << '\n';
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