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

        int arr[26] = {0};

        for(auto x : s){
            arr[x - 'A']++;
        }

        int n = s.size();

        string ans(n , 'a');
        char last = '\0';
        
        for(int i =0 ; i<n ; i++){
            bool f = 0;
            for(int j = 0 ; j< 26 && !f; j++){
                if(arr[j] && last != char('A' + j)){
                    int left = n - i- 1;
                    int mostFreq = (left+1)/2;
                    arr[j]--;
                    bool allPass= 1;
                    for(int k = 0 ; k<26; k++){
                        if(arr[k]){
                            if(k == j){
                                if(arr[k]-1 > mostFreq) allPass = 0;
                            }
                            else{
                                if(arr[k] > mostFreq) allPass = 0;
                            }
                        }
                    }
                    if(allPass){
                        last = char('A' + j);
                        ans[i] = last;
                        f = 1;
                    }
                    else arr[j]++;
                }
            }
            if(!f){
                cout<<-1<<"\n";
                return 0;
            }
        }

        cout<<ans<<"\n";

    }

    return 0;
}