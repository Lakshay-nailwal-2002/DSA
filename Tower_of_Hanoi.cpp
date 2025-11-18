#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define int long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);

void solve(vector<pair<int,int>> &ans , int n , int a , int b , int c ){
    if(n == 0) return;
    solve(ans , n-1 , a ,c ,b);
    ans.push_back({a,c});
    solve(ans , n-1 , b, a, c);
}
 
signed main(){

    FAST
    int t = 1;
    // cin>>t;

    while(t--){

        int n;
        cin>>n;
        vector<pair<int,int>> ans;
        solve(ans , n , 1,2,3);
        cout<<ans.size()<<"\n";
        for(auto x : ans){
            cout<<x.first<<" "<<x.second<<"\n";
        }

    }

    return 0;
}