#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int a, b, c ,d;
    cin >> a >> b >> c >> d;
    if(a == b && b == c && c == d && a == d)
    {
        cout << "YES" << '\n';
    }
    else
        cout << "NO" << '\n';

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