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

        sort(s.begin() , s.end());
        vector<string>arr;
        do
        {
            arr.push_back(s);
        } while (next_permutation(s.begin() , s.end()));
        
        cout<<arr.size()<<endl;
        for(auto x : arr){
            cout<<x<<"\n";
        }

    }

    return 0;
}