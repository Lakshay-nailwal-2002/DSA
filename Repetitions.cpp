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

        string s;
        cin>>s;

        int maxi = 1;
        int currMaxi = 1;

        for(int i = 1 ; i<s.size() ; i++){
            if(s[i] == s[i-1]) currMaxi++;
            else currMaxi = 1;
            maxi = max(maxi , currMaxi);
        }

        cout<<maxi<<endl;
    }

    return 0;
}