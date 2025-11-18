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

        while ( true ){
            cout<<n<<" ";
            if(n == 1) break;
            if(n&1) n = 3*n + 1;
            else n/=2;
        }

        cout<<endl;

    }

    return 0;
}