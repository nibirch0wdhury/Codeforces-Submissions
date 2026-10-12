#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int x; cin >> x;
    int ct = 0;
    while(x > 0){
        if(x%2 != 0){
            ct++;
            x--;
        }
        else{
            x = x/2;
        }
    }
    cout << ct;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    //````cin >> tt;
    while(tt--)solve();
}