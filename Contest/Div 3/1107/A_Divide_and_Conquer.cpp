#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES"<< endl;
#define no     cout << "NO" << endl;

void solve(){
    int x, y;
    cin >> x >> y;
    if(y > x){
        no;
        return;
    }
    if(x%y == 0){
        yes;
    }
    else no;
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