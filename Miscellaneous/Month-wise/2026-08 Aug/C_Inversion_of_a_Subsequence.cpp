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
    int one = 0, zero = 0;
    vector <int> a(n), b(n);
    for(int &k : a) cin >> k;
    for(int &k : b) cin >> k;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            if(a[i] == 0) zero++;
            else one++;
        }
    }
    // cout << zero << endl;
    if(one == zero and zero == 0) cout << 0 << endl;
    else if(one %2 == 0 && one != 0) cout << 2 << endl;
    else if(one != 0)  cout << 1 << endl;
    else if(count(a.begin(), a.end(), 1) > 0 && (count(a.begin(), a.end(), 0)-zero) > 0) cout << 2 << endl;
    else cout << -1 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}