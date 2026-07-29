#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    string s, t;
    vector <int> v;
    cin >> s >> t;
    vector <int> used(s.size(), 0);
    int j = s.size();
    for(int i = t.size() -1; i >= 0; i--){
        char curr = t[i];
        while(s[j] != curr &&){
            j--;
            if(j == 0 && s[j] != curr){
                cout << "NO" <<'\n';
                return;
            }
            if(s[j] == curr){
                v.push_back(j);
                used[j]++;
            }
            
        }
    }
    // for(int k : used){
    //     //cout << k  << " ";
    // }
    for(int k : v){
        for(int i = k+1; i < s.size(); i++){
            if(s[k] == s[i] && used[i] == 0){
                cout << "NO" <<'\n';
                return;
            }
        }
    }
    cout << "YES" <<'\n';
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