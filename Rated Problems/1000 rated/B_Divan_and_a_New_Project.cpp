#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n, temp; cin >> n;
    vector <pair<int, int>> v(n+1);
    v[0].first = 0;
    v[0].second = 0;
    set <pair<int, int>, greater<pair<int, int>>> st;
    for(int i = 0; i < n; i++){
        cin >> temp;
        st.insert({temp, i+1});
    }
    int chodu = 1;
    for(auto &it : st){
        //cout << it.first << " " << it.second << endl;
        v[it.second].first = chodu;
        v[it.second].second = it.first;
        chodu *= -1;
        if(chodu > 0) chodu++;
    }
    ll ans = 0;
    for(auto k : v){
        if(k.first > 0) ans+= 1LL*k.first*k.second;
        else ans+= 1LL*k.first*k.second *-1;
    }
    cout << ans *2<< endl;
    for(auto k : v){
        cout << k.first << " ";
    }
    cout << endl; 
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}