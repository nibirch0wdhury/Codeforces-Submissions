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
    unordered_map <int, int> mp;
    for(int &k : v) {
        cin >> k;
        mp[k]++;
    }
    for(auto it: mp){
        if(it.second == 1){
            cout << -1 << endl;
            return;
        }
    }
    vector<int> ans;
    int seen = v[0];
    int last = -1;
    v.push_back(-1);
    for(int i = 1; i <= n; i++){
        if(v[i] != seen){
            seen = v[i];
            if(last == -1)ans.push_back(i);
            else ans.push_back(i-last);
            last = i;
        }
    }
    int value = 0;
    for(int k: ans){
        for(int i = value; i < value+k-1; i++){
            cout << i+2 << " ";
        }
        cout << value+1 << " ";
        value += k;
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}