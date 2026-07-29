#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    string s; sin >> s;
    int c1 = 0, c0 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1')c1++;
        else c0++;
    }
    for(int i = 0; i < n; i++){
        if(s[i] == '1') c0--;
        else c1--;

        if(c0 == 0 || c1 == 0){
            cout << s.size() - (i+1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}