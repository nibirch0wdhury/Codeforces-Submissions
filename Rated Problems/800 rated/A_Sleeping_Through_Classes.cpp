#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    int nosleep = 0, sleep = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0' && nosleep == 0){
            sleep++;
        }
        else if(s[i] == '1'){
            nosleep = k;
        }
        else if(nosleep != 0){
            nosleep--;
        }
    }
    cout << sleep << '\n';
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