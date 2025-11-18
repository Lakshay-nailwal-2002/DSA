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

        if(n <= 3 && n != 1) cout<<"NO SOLUTION\n";
        else{
            for(int i = 2; i<=n ; i+=2){
                cout<<i<<" ";
            }
            for(int i = 1 ; i<=n ; i+=2){
                cout<<i<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}