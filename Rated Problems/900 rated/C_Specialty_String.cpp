#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n-1; i++){
        if(s[i] == s[i+1]){
            s[i] = '*';
            s[i+1] = '*';
            i++;
        }
    }
    int x = 1;
    while(x){
        x = 0;
        for(int i = 1; i < s.size() - 1; i++){
            int l, r;
            if(s[i] == '*'){
                for(int j = i; j >= 1; j--){
                    if(s[j] != '*')l = j;
                }
                for(int j = i; j < s.size(); j++){
                    if(s[j] != '*')r = j;
                }
                if(s[l] == s[r]){
                    s[l] = '*';
                    s[r] = '*';
                    x++;
                }
            }
            i = r;
        }
    }
    cout << "1 "<< x << endl;
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