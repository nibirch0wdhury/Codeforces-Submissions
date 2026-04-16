#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n;
    cin >> n;
    int even = 0, odd = 0;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i]%2 == 0){
            even++;
        }
        else
            odd++;
    }
    if(even != n && odd != n){
        sort(v.begin(), v.end());
    }
    for(int it :  v){
        cout << it << " ";
    }
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