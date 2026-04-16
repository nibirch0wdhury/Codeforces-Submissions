#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n;
    cin >> n;
    int c = 0;
    int a1 = 0, a2 = 0, a3 = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a == 4)c++;
        else if(a == 3)a3++;
        else if(a == 2)a2++;
        else if(a == 1)a1++;
    }
    c += a3;
    a1 -= a3;
    if(a2%2 == 0){
        c += (a2/2);
        a2 == 0;
        if(a1 > 0){
            if(a1%4 == 0)
                c += a1/4;
            else
                c += a1/4+1;
        }
    }
    else{
        c += (a2/2) + 1;
        if(a1 > 2){
            a1 -= 2;
            if(a1%4 == 0)
                c += a1/4;
            else
                c += a1/4+1;
        }
    }
    cout << c << '\n';
}