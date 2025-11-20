#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define int long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);


int solve(int*arr , int n, int i , int sum1 , int sum2){
    if(i == n) {
        return abs(sum1 - sum2);
    }
    int p1 = solve(arr , n , i+1, sum1 + arr[i] , sum2);
    int p2 = solve(arr , n , i+1 , sum1 , sum2 + arr[i]);

    return min(p1, p2);
}
 
signed main(){

    FAST
    int t = 1;
    // cin>>t;

    while(t--){

        int n;
        cin>>n;

        int arr[n];
        for(int i =0 ; i<n ; i++){
            cin>>arr[i];
        }

        cout<<solve(arr , n , 0 , 0,0)<<endl;

    }

    return 0;
}