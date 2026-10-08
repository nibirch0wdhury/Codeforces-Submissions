#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    int ct = 0;
    for(int i = 0; i < n - 1; i++){
        if(s[i] != s[i+1]) ct++;
    }
    if(ct == 1)cout << 2 << endl;
    else cout << 1 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}