#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n;
    cin >> n;
    int g = -1;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << g << '\n';
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