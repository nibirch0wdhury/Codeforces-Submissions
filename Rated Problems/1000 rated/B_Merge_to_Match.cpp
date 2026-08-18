#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n, m, tm; cin >> n >> m;
    set <int> a;
    set <int> b;
    for(int i = 0; i < n; i++){
        cin >> tm; a.insert(tm);
    }
    for(int i = 0; i < m; i++){
        cin >> tm; b.insert(tm);
    }
    for(int k : b){
        if(a.size() == 0){
            no; return;
        }
        else if(k > *a.begin()) a.erase(a.begin());
        else {
            no; return;
        }
    }
    for(int k : b){
        if(a.upper_bound(k) != a.end()) a.erase(a.upper_bound(k));
        else {
            no; return;
        }
    }
    yes;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}