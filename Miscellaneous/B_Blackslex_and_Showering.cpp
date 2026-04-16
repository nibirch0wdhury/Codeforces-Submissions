#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n;
    cin >> n;

    int difsum = 0;
    vector <int> v(n);
    vector <int> dif;
    vector <int> dif3;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    if(n == 3){
        int a = abs(v[0] - v[1]);
        int b = abs(v[0] - v[2]);
        int c = abs(v[1] - v[2]);
        cout << min(a, min(b,c)) << '\n';
        return;
    }
    for(int i = 0; i < n - 1; i++){
        int a = abs(v[i] - v[i+1]);
        dif.push_back(a);
        difsum += a;
    }

    for(int i = 0; i < n - 2 ; i++){
        int a = abs(v[i] - v[i+2]);
        dif3.push_back(a);
    }

    vector <pair <int, int>> ans;
    ans.push_back({*dif.begin(), 0});
    ans.push_back({dif.back(), 0});

    for(int i = 0; i < dif3.size() -1; i++){
        int a = dif3[i];
        int b = dif[i] + dif[i+1];
        ans.push_back({max(a,b), min(a,b)});
    }
    int mx = 0;
    int k, l;
    for(auto a: ans) {
        if(a.first > mx){
            mx = a.first;
            k = a.first;
            l = a.second;
        }
    }
    if(difsum - k + l < 0) {
        cout << '0' << '\n';
        return;
    }
    cout << difsum - k + l<< endl;
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