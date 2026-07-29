#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0, mx = 0;
    for(int i = 0; i < n; i++){
        if(count == 0){
            if(s[i] == '#'){
                count++;
            }
        }
        else{
            if(s[i] == '#'){
                count++;
            }
            else{
                mx = max(mx, count);
                count = 0;
            }
        }
    }
    if(count != 0){
        mx = max(mx, count);
    }
    cout << ceil(mx/(float)2) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}