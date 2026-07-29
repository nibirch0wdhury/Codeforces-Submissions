#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector <char> a;
    vector <int> b;
    for(int i = 0; i < n-k; i++){
        a.push_back(s[i]);
        
    }
    for(int i = n-k; i < n; i++){
        b.push_back(s[i]);
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '1' && i > b.size()){
            cout << "NO" << '\n';
            return;
        }
        else if(a[i] == '1' && b[i] == '0'){
            cout << "NO" << '\n';
            return;
        }
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i] == '1' && i > a.size()){
            cout << "NO" << '\n';
            return;
        }
        else if(b[i] == '1' && a[i] == '0'){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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