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

        int sum = (n * (n+1)) / 2;

        if(sum&1) cout<<"NO\n";
        else{
            cout<<"YES\n";
            set<int> st,st1;
            int temp = sum/2;
            for(int i = n ; i >= 1 ; i--){
                if(temp - i >= 0){
                    st.insert(i);
                    temp -= i;
                }
                else st1.insert(i);
            }

            cout<<st.size()<<"\n";
            for(auto x : st) cout<<x<<" ";
            cout<<"\n"<<st1.size()<<"\n";
            for(auto x : st1) cout<<x<<" ";

        }

       

    }

    return 0;
}