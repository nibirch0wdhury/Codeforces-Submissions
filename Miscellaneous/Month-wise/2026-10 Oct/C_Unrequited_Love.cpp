#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    for(int &k : a) cin >> k;
    unordered_map <int, vector <int> > mp;
    for(int i = 0; i < n-4; i++){
        int l = a[i] + a[i+2] - a[i+4];
        // cout << l << endl;
        mp[l].push_back(i);
    }

    // cout << mp.size() << "--"  << endl;
    // for(auto k : mp){
    //     auto vec = k.second;
    //     for(auto p : vec){
    //         cout << p << " ";
    //     }
    //     cout << endl;
    // }
    
    ll mx = -1;
    for(auto k : mp){
        ll t = 0, tt = 0;
        ll c = 0, cc = 0;
        auto vec = k.second;
        int last = -10;
        for(int i = 0; i < vec.size(); i++){
            if(vec[i]%2 == 0) c++;
            if(vec[i]%2 == 1) cc++;
            if(vec[i] > last + 4 && vec[i] % 2 == 0){
                last = vec[i];
                t++;
            }
        }
        last = -10;
        for(int i = 0; i < vec.size(); i++){
            if(vec[i] > last + 4 && vec[i] % 2 == 1){
                last = vec[i];
                tt++;
            }
        }
        cout << c << " " << cc << " " << t << " " << tt << endl;
        ll total = (t*(t-1))/2 +(tt*(tt-1))/2 + c * cc;
        mx = max(mx, total);
    }
    cout << mx << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}