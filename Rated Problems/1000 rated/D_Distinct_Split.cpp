#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n; string s;
    cin >> n >> s;
    vector <int> front(n+1, 0), back(n+1, 0);
    unordered_set <char> dis, sis;
    for(int i = 0; i < n; i++){
        dis.insert(s[i]);
        front[i+1] = dis.size();
    }
    for(int i = n-1; i >= 0; i--){
        sis.insert(s[i]);
        back[i+1] = sis.size();
    }
    int mx = dis.size();
    for(int i = 0; i < n; i++){
        int ct = front[i] + back[i+1];
        mx = max(mx, ct);
    }
    cout << mx << endl;
    // for(int a: front) cout << a << " ";
    // cout << endl;
    // for(int a: back) cout << a << " ";
    // cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}