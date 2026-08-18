#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            i = i+k;
        }
        else{
            count++;
        }
        //cout << count << " ";
    }
    cout << count << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cout << INT_MAX << " "<< LLONG_MAX;
    cin >> tt;
    while(tt--){
        solve();
    }
}