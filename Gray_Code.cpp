#include<bits/stdc++.h>
using namespace std;

vector<string> ans;

void dfs(string &s, int idx, int n){
    if(idx == n){
        ans.push_back(s);
        return;
    }

    dfs(s, idx + 1, n);     // without flipping this bit

    s[idx] ^= 1;            // flip bit idx
    dfs(s, idx + 1, n);     // with flip
}

signed main(){
    int n;
    cin >> n;

    string s(n, '0');
    dfs(s, 0, n);

    for(auto &x : ans) cout << x << "\n";
}
