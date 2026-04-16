#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int k1 = a+b+c;
    int k2 = a*b*c;
    int k3 = (a+b) *c;
    int k4 = a*(b+c);
    int k5 = (a*b)+c;
    int k6 = a+(b*c);
    cout << max(k1, max(k2, max(k3, max(k4, max(k5, k6))))) << '\n';
}