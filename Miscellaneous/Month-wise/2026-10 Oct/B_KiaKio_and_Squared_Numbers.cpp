#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

int digit(int k){
    if(k == 0) return 0;
    return digit(k/10) + (k%10)*(k%10);
}

void solve(){
    int n; cin >> n;
    vi v(n);
    for(int &k : v) cin >> k;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < n; j++){
            v[j] = digit(v[j]);
        }
    }
    map <int, int> st;
    for(int k : v) st[k]++;
    if(st.size() == n) cout << 0 << endl;
    else{
        int ans = 0;
        for(auto k : st){
            if(k.second > 1){
                for(int i = 1; i < k.second; i++){
                    ans += i;
                }
            }
        }
        cout << ans << endl;
    } 
    
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}