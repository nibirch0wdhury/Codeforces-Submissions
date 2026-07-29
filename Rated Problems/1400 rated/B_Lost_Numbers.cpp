#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int k;
    vector <int> a(6);
    unordered_set <int> s = {4,8,15,16,23,42};
    for(int i = 1; i <= 2; i++){
        cout << "? " << i << " " << i << endl;
        cin >> k;
        a[i-1] = sqrt(k);
        s.erase(a[i-1]);
    }
    map <int, int> mp;
    for(int i = 3; i <= 4; i++){
        cout << "? " << i << " " << i+1 << endl;
        cin >> k; //45
        for(int p : s) {
            if(k%p == 0 && s.find(k/p) != s.end() && k/p != p) mp[p]++;
        }
    }
    for(auto it: mp){
        if(it.second == 2){
            a[3] = it.first;
        }
    }
    for(auto it: mp){
        //cout << it.first << " " << it.second << endl;
    }
    mp.erase(a[3]);
    a[4] = k/a[3];
    mp.erase(a[4]);
    auto it = mp.begin();
    a[2] = it->first;
    for(int i = 2; i < 5; i++) s.erase(a[i]);
    a[5] = *s.begin();
    cout << "! ";
    for(int l: a) cout << l << " ";
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    //cin >> tt;
    while(tt--)solve();
}