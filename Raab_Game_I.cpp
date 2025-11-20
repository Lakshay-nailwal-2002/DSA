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

        int n,a,b;
        cin>>n>>a>>b;

        if((a+b) > n){
            cout<<"NO\n";
            continue;
        }

        if( n <=2 && (a != b) ){
            cout<<"NO\n";
            continue;
        }

        if((a+b)>0 && (a == 0 || b == 0)){
            cout<<"NO\n";
            continue;
        }

        cout<<"YES\n";
        for(int i = 1; i<=n ; i++){
            cout<<n-i+1<<" ";
        }
        cout<<"\n";
        int tie = n - (a+b);

        int last = n+1;
        for(int i = n; i >= 1 ; i--){
            if(tie <=0 ) break;
            cout<<i<<" ";
            last = i;
            tie--;
        }

        for(int i = 0 ; i<a ; i++){
            cout<<a - i<<" ";
        }

        for(int i = 0 ; i<b ; i++){
            cout<<(last-1) - i<<" ";
        }

        cout<<endl;







    }

    return 0;
}