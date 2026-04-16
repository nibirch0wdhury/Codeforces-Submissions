#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    string s;
    cin >> s;
    vector <int> v0;
    vector <int> v1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            v0.push_back(1);
            for(int j = i + 1; j < s.size(); j++){
                if(s[j] == '0')
                    v0[v0.size() - 1]++;
                else break;
            }
        }
        else if(s[i] == '1'){
            v1.push_back(1);
            for(int j = i + 1; j < s.size(); j++){
                if(s[j] == '1')
                    v1[v1.size() - 1]++;
                else break;
            }
        }
    }
    if(*max_element(v0.begin(), v0.end()) > 6 || *max_element(v1.begin(), v1.end()) > 6) 
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    // for(int a : v0) cout << a << " ";
    // cout << endl;
    // for(int a : v1) cout << a << " ";
    
}