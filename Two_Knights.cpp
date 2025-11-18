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

        for(int i =1;i<=n ; i++){
            int temp = 2 * (i-1) * (i-2);
            cout<< ((i*i * ( i*i - 1)) /2 - 2*temp) <<"\n";
        }

    }

    return 0;
}