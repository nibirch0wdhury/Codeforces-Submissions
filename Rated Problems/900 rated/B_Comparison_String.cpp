#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int curr = 1,maxc = 0;
    char c = s[0];
    for(int i = 1; i < n; i++){
        if(c == s[i]) curr++;
        else{
            curr = 1;
            c = s[i];
        }
        if(maxc < curr) maxc = curr;
    }
    if(maxc < curr) maxc = curr;
    cout << maxc + 1 << '\n';
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