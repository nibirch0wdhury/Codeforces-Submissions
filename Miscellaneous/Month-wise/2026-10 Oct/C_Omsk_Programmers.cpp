#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int a, b, x; cin >> a >> b >> x;
    int mn = abs(a-b);
    int bg = max(a,b);
    int sm = min(a,b);
    int i = 0;
    if(x > a && x > b){
        mn = min(mn, 2);
    }
    while(bg!=sm){
        if(sm > bg) swap(sm,bg);
        bg = bg/x;
        i++;
        mn = min(mn, abs(bg-sm)+i);
    }
    cout << mn << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}