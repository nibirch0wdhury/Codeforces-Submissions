#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int is6 = -1, is5 = -1;
    for(int i = 0; i < s.size() - 3; i++){
        if(s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '6'){
            cout << 0 << '\n';
            return;
        }
    }
    for(int i = 0; i < s.size() - 3; i++){
        if(s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5'){
            cout << 1 << '\n';
            return;
        }
    }
    cout << "0" << '\n';
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