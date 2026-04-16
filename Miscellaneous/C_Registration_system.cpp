#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    cin >> n;
    unordered_map <string, int> s;
    string a;
    for(int i = 0; i < n; i ++){
        cin >> a;
        if(s.find(a) == s.end()){
            s[a] = 1;
            cout << "OK" << '\n';
        }
        else{
            auto it =  s.find(a);
            cout << it->first << it->second << '\n';
            s[a]++;
        }
    }
}