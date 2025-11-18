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

        int a,b;
        cin>>a>>b;

        if( (a+b) % 3 == 0 && (max(a,b) <= 2*min(a,b)) ){
            cout<<"YES\n";
        }
        else cout<<"NO\n";

    }

    return 0;
}