#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n'
#define no     cout <<  "NO" << '\n'
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int k = 0;
    for(int i = 0; i < n - 1; i++){
        if(s[i] == s[i+1] && s[i] != '*'){
            s[i] = '*';
            s[i+1] = '*';
            k++;
        }
    }
    if(k == 0){
        no; return;
    }
    while(k){
        k = 0;
        s.erase(remove(all(s), '*'),s.end());
        if(s.size() < 2) break;
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == s[i+1] && s[i] != '*'){
                s[i] = '*';
                s[i+1] = '*';
                k++;
            }
        }
    }
    (s.size()==0)?yes:no;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}