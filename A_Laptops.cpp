#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin >> n;
    map <int, int> m;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        m.insert(a, b);
    }
    for(auto p : m){
        cout << p->first << " " << p->second << '\n';
    }
}