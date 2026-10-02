#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;
// 48 -> 0
// 49    1
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int one = count(all(s), '1');
    int zero = count(all(s), '0');
    int ze = 0;
    int on = 0;
    // cout << one << " " << zero << endl;
    int ans = INT_MAX;
    if(s[0] == '1'){
        cout << zero << endl;
        return;
    }
    for(int i = 0; i < n; i++){
        if(s[i] == '0') ze++;
        else on++;

        int changes_needed = on + (zero-ze);
        ans = min(ans, changes_needed);
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}