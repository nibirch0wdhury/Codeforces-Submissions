#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n;
    cin >> n;
    unordered_map <int, int> m;
    for(int i = 0; i < n; i++){
        int k; cin >> k;
        m[k]++;
    }
    int sum = 0, i = 1;
    auto it = 1;
    if(n == 1){
        cout << m.begin()->first << endl;
        return;
    }
    for(auto k: m){
        // cout << k.second << endl;
        if(n/2 < k.second){
            int can = min (k.second, ((n - k.second) + 2));
            sum += can * k.first;
            it = k.first;
            i--;
            // cout << sum << endl;
        }
    }
    if(i == 0) m.erase(it);
    for(auto k : m){
        sum += (k.first*k.second);
        // cout << k.first  << k.second << endl;
    }
    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}