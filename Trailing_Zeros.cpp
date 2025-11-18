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

        int i = n;
        int cnt =0;
        while(i){
            cnt += i/5;
            i /= 5;
        }

        int j = n;
        int cnt1 = 0;
        while(j){
            cnt1 += j/2;
            j /= 2;
        }

        cout<< min(cnt , cnt1 ) <<endl;

    }

    return 0;
}