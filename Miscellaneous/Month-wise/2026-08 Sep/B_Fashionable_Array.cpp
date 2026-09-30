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
    map <int, int, greater<int> > mp;
    for(int i = 0; i < n; i++){
        int k; cin >> k;
        mp[k]++;
    }
    vector <int> ans;
    while(ans.size() != n){
        for(auto &k : mp){
            if(k.second > 0){
                ans.push_back(k.first);
            }
            k.second--;
            // if(k.second == 0) mp.erase(k.first);
        }
        // for(auto i = mp.begin(); i != mp.end(); i++){
        //     if(i->second > 0){
        //         ans.push_back(i->first);
        //     }
        //     i->second--;
        //     // if(i -> second == 0 ) mp.erase(i);
        // }
    }
    for(int k: ans){
        cout << k << " ";
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}