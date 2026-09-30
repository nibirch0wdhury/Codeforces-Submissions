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
    vector <int> a(n+1);
    vector <int> ans;
    int now, after, plus = 0;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if(a[i] > 0) plus++;
    }
    if(plus == n){
        cout << 1 << endl << n << endl;
        return;
    } 
    if(a[n] > 0) ans.push_back(n);
    for(int i = n; i > 1; i--){
        (a[i] > 0) ? now = 1 : now = -1;
        (a[i-1] > 0) ? after = 1 : after = -1;
        if(ans.size() % 2 == 0 && now+after == 0 && now == -1){
            ans.push_back(i-1);
        }
        if(ans.size() % 2 == 1 && now+after == 0 && now == 1){
            ans.push_back(i-1);
        }
    }

    cout << ans.size() << endl;
    for(int k : ans) cout << k << " ";
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}