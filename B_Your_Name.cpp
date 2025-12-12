#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t){
        cout << "YES" << '\n';
    }
    else
        cout << "NO" << '\n';
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