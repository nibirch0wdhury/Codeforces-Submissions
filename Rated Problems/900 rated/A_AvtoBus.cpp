#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    ll n;
    cin >> n;
    if(n % 2 != 0 || n < 4){
        cout << "-1" <<'\n';
        return;
    }
    else if(n == 4 || n == 6){
        cout << "1 1" << '\n';
        return;
    }
    ll min, max;
    if(n%6 == 0){
        min = n/6;
    }
    else if((n%6)== 4 || (n%6) == 2){
        min = n/6 + 1;
    }
    max = n/4;
    cout << min << " " << max << '\n';
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