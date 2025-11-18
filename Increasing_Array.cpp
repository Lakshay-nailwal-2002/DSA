#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define int long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);

 
signed main(){

    FAST
    int t = 1;
    // cin>>t;

    while(t--){

        int n;
        cin>>n;

        int maxi = 0;
        int ans = 0;
        for(int i = 0 ; i<n ; i++){
            int x;
            cin>>x;
            if(i == 0){
                maxi = x;
            }
            else{
                ans += max(0ll , (maxi - x));
                maxi = max(maxi , x);
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}