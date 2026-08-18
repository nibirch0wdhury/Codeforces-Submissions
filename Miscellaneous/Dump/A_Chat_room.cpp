#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    string s;
    cin >> s;
    string h = "hello";
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == h[j]){
            j++;
        }
        //if(j == 4) break;
    }
    if(j >= 5) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}