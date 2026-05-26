#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n, a;
    cin >>n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        int maxd = (n - i - 1)*2;
        if(v[i] <= maxd){
            cout << "NO" <<'\n';
            return;
        }
        else if(v[i] <= i*2){
            cout << "NO" <<'\n';
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