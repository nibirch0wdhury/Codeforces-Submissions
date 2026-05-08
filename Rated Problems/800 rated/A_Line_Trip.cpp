#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n, x;
    cin >> n >> x;
    vector <int> st(n);
    for(int i = 0; i < n; i++) cin >> st[i];

    vector <int> diff;
    int maxd = st[0];
    for(int i = 0; i < n-1; i++){
        int d = abs(st[i] - st[i+1]);
        if(d > maxd) maxd= d;
    }
    int fd = 2 * abs(st[n-1] - x);
    cout << max(fd, maxd) << '\n';
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