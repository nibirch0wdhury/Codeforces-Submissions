#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    string n, m;
    cin >> n >> m;
    char a, b;
    a = n[n.length() - 1];
    b = m[m.length() - 1];
    int x = a - '0';
    int y = b - '0';
    cout << x + y << '\n';
}