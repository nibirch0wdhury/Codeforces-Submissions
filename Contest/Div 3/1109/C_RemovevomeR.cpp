#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES"<< endl;
#define no     cout << "NO" << endl;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c1 = 0, c0 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1') c1++;
        else c0++;
    }
    // cout << c1 << c0 << endl;
    if(c0 == 0 || c1 == 0)
        cout << 1 << endl;
    else if(c0 >= 2 && c1 >= 2)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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