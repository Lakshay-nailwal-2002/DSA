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

        int arr[n+1];
        int maxi = INT_MIN;
        for(int i = 1 ; i<=n ; i++){
            cin>>arr[i];
            arr[i] ^= arr[i-1];
            if(arr[i] > maxi) {
                maxi = arr[i];
            }
        }

        int ans = INT_MIN;
        for(int i = 0 ; i<=n ; i++){
            ans = max( ans , maxi^arr[i]);
        }
        cout<< ans <<endl;



    }

    return 0;
}