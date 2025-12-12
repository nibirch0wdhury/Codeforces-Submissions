#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, m, x , y, k, cnt = 0;
    ll xv, yv, xd, yd;
    cin >> n >> m >> x >> y >> k;
    for(int i = 0; i < k; i++){
        cin >> xv >> yv;
        if(xv > 0){
            xd = n - x;
        }
        else{
            xd = x - 1;
        }
        if(yv > 0){
            yd = m - y;
        }
        else{
            yd = y - 1;
        }
        if(xv == 0 && yv == 0){
            continue;
        }
        else if(xv == 0){
            cnt += abs(yd/yv);
            y += yv * abs(yd/yv);
        }
        else if(yv == 0){
            cnt += abs(xd/xv);
            x += xv * abs(xd/xv);
        }
        else{
            cnt += min(abs(xd/xv), abs(yd/yv));
            y += yv * min(abs(xd/xv), abs(yd/yv));
            x += xv * min(abs(xd/xv), abs(yd/yv));
        }
        //cout << xd << " " << yd << " " << cnt << " " << '\n';
    }
    cout << cnt << '\n';
}
