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

        int sum = (n * (n+1))/2;
        for(int i = 0 ; i<n-1 ; i++){
            int x;
            cin>>x;
            sum -=x;
        }
        cout<<sum<<endl;

    }

    return 0;
}