#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n, k;
    cin >> n;
    vector <int> even;
    vector <int> odd;
    //cin >> k;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a%2 ==  0){
            even.push_back(a);
        }
        else{
            odd.push_back(a);
        }
    }
    sort(even.rbegin(), even.rend());
    sort(odd.rbegin(), odd.rend());
    
    int e, o;
    e = even.size();
    o = odd.size();
    int ei = 0, oi = 0;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(ans%2 == 0){
            if(oi < o){
                ans += odd[oi];
                oi++;
            }
            else if(ei < e){
                ans += even[ei];
                ei++;
            }
        }
        else{
            if(ei < e){
                ans += even[ei];
                ei++;
            }
            else if(oi < o){
                ans += odd[oi];
                oi++;
            }
        }
        if(ans%2 == 0){
            ans = 0;
            cout << ans  << " ";
        }
        else{
            cout << ans << " ";
        }
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}