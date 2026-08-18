#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n, a, c;
    cin >> n;
    map <int, int> m;
    for(int i = 0; i < n; i++){
        cin >> a;
        m[a]++;
    }
    
    c = m[0]; // 0
    int mn = min(m[1], m[2]);
    c += mn; /// 1
    m[1] -= mn; ///m1 0
    m[2] -= mn; //// 2
    c += m[1]/3;
    c += m[2]/3;
    cout << c << '\n';
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