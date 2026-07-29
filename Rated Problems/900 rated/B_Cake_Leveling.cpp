#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n; cin >> n;
    vector <ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll mn = a[0];
    ll sum = a[0];
    cout << a[0] << " ";
    for(int i = 1; i < n; i++){
        sum += a[i];
        mn = min(sum/(i+1), mn);
        cout << mn << " ";
    }
    cout << endl;
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