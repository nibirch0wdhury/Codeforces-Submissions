#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n, k;
    string s;
    int even = 0, odd = 0;
    cin >> n >> k >> s;
    
    vector <int> hsh(26, 0);
    for(int i = 0; i < n; i++)
        hsh[s[i] - 'a']++;

    for(int i = 0; i < 26; i++){
        if(hsh[i] % 2 == 0) even++;
        else odd++;
    }

    if((odd - k)<=1) cout << "YES" << '\n';
    else cout<< "NO" << '\n';
}   

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tt = 1;
    cin >> tt;
    while(tt--){
        solve();
    }
}