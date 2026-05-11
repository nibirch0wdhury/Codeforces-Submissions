#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    string s;
    cin >> s;

    if(s.size() == 1){
        cout << 1 << '\n';
        return;
    }

    int c1 = 0, c0 = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') c0++;
        if(s[i] == '1') c1++;
    }

    if(c1 == c0){
        cout << 0 << '\n';
        return;
    }
    else if(c1 == 0 || c0 == 0){
        cout << s.size() << '\n';
        return;
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') c1--;
        else c0--;

        if(c1 == 0 || c0 == 0){
            cout << s.size() - i - 1 << '\n';
            return;
        }
    }
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