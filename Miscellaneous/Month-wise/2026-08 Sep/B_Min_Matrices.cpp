#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n, k; cin >> n >> k;
    if(n > k || n*2 - 1< k){
        cout << -1 << endl;
        return;
    }
    vector <vector<int>> a(n+1, vector<int> (n+1));
    int mn = 1;
    int mx = n*n;
    int l = 1;
    for(; l <= (k-n);l++){
        a[l][l] = mx;
        mx--;
    }
    for(; l <= n; l++){
        a[l][l] = mn;
        mn++;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 0){
                a[i][j] = mx;
                mx--;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}