#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first != b.first) return a.first > b.first;
    else return a.second < b.second;
}

void solve(){
    int n, k; cin >> n >> k;
    vector <pair<int, int>> v;
    for(int i = 1; i <= n; i++){
        int a; cin >> a;
        if(a%k == 0)v.push_back({k, i});
        else v.push_back({a%k, i});
        
    }
    //for(auto it: v) cout << it.first << " ";
    sort(v.begin(), v.end(), cmp);
    for(auto it: v) cout << it.second << " ";
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}