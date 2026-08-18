#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n, m, k;
    int negg = 0;
    cin >> n >> m;
    vector <int> v(n*m);
    for(int i = 0; i < n*m; i++){
        cin >> k;
        if(k >= 0) v[i] = k;
        else {
            v[i] = k * -1;
            negg++;
        }
    }
    // cout << negg << endl;
    ll sum = accumulate(v.begin(), v.end(), 0);
    if(negg % 2 != 0) sum -= (*min_element(v.begin(), v.end()) * 2);
    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}