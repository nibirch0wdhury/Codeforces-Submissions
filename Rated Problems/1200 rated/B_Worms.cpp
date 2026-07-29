#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n, q;
    cin >> n;
    vector <int> a(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    } 
    cin >> q;
    vector <int> juice(q);
    for(int i = 0; i < q; i++) cin >> juice[i];

    for(int k : juice){
        auto it = a.begin();
        cout << lower_bound(a.begin(), a.end(), k) - it << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tt = 1;
    //cin >> tt;
    while(tt--){
        solve();
    }
}