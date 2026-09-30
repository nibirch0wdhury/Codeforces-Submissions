#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n, m; cin >> n >> m;
    int mx = n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.rbegin(), a.rend());
    // for(int k : a) cout << k << " ";
    // cout << endl;
    for(int i = 0; i < n;){
        int curr = a[i];
        if(curr %2 == 0){
            int count = 1;
            for(int j = i+1; j < n; j++){
                if(curr == a[j])count++;
                else break;
            }
            int half = curr/2;
            int kk = 0;
            for(int j = n-1; j >= 0; j--){
                kk++;
                if(a[j] >= half) {
                    // cout << half << "??" << endl;
                    // cout << kk << "---" << n-kk;
                    // cout << endl;
                    mx = max(mx, ((n-kk+1) + count));
                    break;
                }
            }
            i+=count;
        }
        else i++;
    }
    cout << mx << endl;
    // cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}