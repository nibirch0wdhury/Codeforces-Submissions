#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    int a, b, c;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    if(x == 0 && y == 0 && z == 0){
        cout << "YES" << '\n';
    }
    else
        cout << "NO" << '\n';
}