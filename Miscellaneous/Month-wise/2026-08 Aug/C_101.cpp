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
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        if(v[i] == 1)break;
        else if(v[i] == -1){
            v[i] = 1;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(v[i] == 1)break;
        if(v[i] == -1){
            v[i] = 1;
            break;
        }
    }
    for(int k : v){
        if(k == -1) cout << 0 << " ";
        else cout << k << " ";
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}