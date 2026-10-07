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
    string s; cin >> s;
    // cout << s.size() << endl;
    string x = s;
    x.erase(unique(all(x)), x.end());
    for(int i = 1; i < n-1; i++){
        if(s[i] != s[i-1] && s[i-1] == s[i+1]){
            cout << x.size() - 2 << endl;
            return;
        }
    }
    for(int i = 1; i < n-1; i++){
        if(s[i] != s[i-1] && s[i] != s[i+1]){
            cout << x.size() - 1 << endl;
            return;
        }
    }
    cout << x.size()<< endl;

}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}