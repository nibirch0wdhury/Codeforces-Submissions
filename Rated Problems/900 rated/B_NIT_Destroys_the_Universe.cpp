#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int count = 0;
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 0){
            flag = 0;
        }
        else if(flag == 0){
            flag = 1;
            count++;
        }
    }
    if(count >= 2){
        cout << "2" << '\n';
    }
    else cout << count << endl;
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