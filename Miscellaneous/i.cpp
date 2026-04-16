#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n;
    cin >> n;
    map <int, string> m;
    int max = 0;
    for(int i = 0; i < n; i++){
        string b;
        int a;
        cin >> b >> a;
        if(a>max){
            max = a;
        }
        auto it = m.find(a);
        if(it != m.end()){
            string s = it->second;
            if(s.compare(b) > 0){
                //cout << a << s << " sdfsd" << '\n';
                m[a] = b;
            }
        }
        else{
            m.insert({a, b});
        }
    }
    cout << m[max] << '\n';
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}