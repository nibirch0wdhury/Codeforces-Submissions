#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

//odd ke 1 kora jai always
// even 0 2 0 2 0 2
void solve(){
    int n, k; cin >> n;
    int odd = 0, even1 = 0, even0 = 0;
    for(int i = 0; i < n; i++){
        cin >> k;
        if(k%2 == 1)odd++;
        else{
            k = k/2;
            if(k%2 == 1)even1++;
            else even0++;
        }
    }
    int ans = max(even1, odd);
    ans = max(ans, even0);
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}