#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define int long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);

 
signed main(){

    FAST
    int t = 1;
    cin>>t;

    while(t--){

        int y,x;
        cin>>y>>x;

        int n = max(x, y);
        int ans = n*(n-1) + 1;

        if(x > y){
            if(x&1){
                ans += (n-y);
            }
            else{
                ans -= (n-y);
            }
        }
        else{
            if(y&1){
                ans -= (n-x);
            }
            else{
                ans += (n-x);
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}