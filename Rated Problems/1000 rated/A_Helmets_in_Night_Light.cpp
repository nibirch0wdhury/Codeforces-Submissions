#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second) return a.second < b.second;
    else return a.first > b.first;
}

void solve(){
    int n, p; cin >> n >> p;
    vector <pair<int, int>>v;
    for(int i = 0; i < n; i++){
        int c; cin >> c;
        v.push_back({c,0});
    }
    for(int i = 0; i < n; i++){
        int c; cin >> c;
        v[i].second = c;
    }
    
    sort(v.begin(), v.end(), cmp);

    //for(auto it: v) cout << it.first << " " << it.second << endl;
    ll pp = 1;
    ll cost = p;
    for(int i = 0; i < n && pp < n; i++){
        if(v[i].second >= p) break;
        else if(pp + v[i].first > n){
            ll temp = n-pp;
            pp = n;
            cost += temp * v[i].second;
        }
        else{
            pp += v[i].first;
            cost += v[i].first*v[i].second;
            //cout << pp << "_____" << cost << " " << i << endl;
        }
    }
    if(pp == n) cout << cost << endl;
    else cout << cost + (n - pp) * p << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}