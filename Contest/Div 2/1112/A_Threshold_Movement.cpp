#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
   int n; cin >> n;
   vector <int> v(n);
   int mx = INT_MAX;
   int mn = -1;
   for(int i = 0; i < n; i++){
        cin >> v[i];
        if(i%2 == 0){
            mx = min(mx, v[i]);
        }
        else{
            mn = max(mn, v[i]);
        }
   }
   if(n % 2 != 0){
        no;
    return;
   }
   if(mx > mn && mx - mn > 1){
        yes;
   }
   else no;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}