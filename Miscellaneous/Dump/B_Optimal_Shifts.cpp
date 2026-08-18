#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n;
    string s;
    cin >>  n >> s;
    int a = 0, b;
    vector <int> v;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            count++;
        }
        else{
            v.push_back(count);
            count = 0;
        }
    }
    v.push_back(count);
    if(*v.begin() != 0 && *(--v.end())!= 0){
        a = *v.begin() + *(--v.end());
    }
    b = *max_element(v.begin(), v.end());
    cout << max(a,b) <<'\n';
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}