#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define int long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);


char arr[1000][1000];

bool possible(char ch , int i , int j){
    if(arr[i][j] == ch){
        return false;
    }
    
    if(i && arr[i-1][j] == ch) {
        return false;
    }

    if(j && arr[i][j-1] == ch) {
        return false;
    }

    return true;
}
 
signed main(){

    FAST
    int t = 1;
    // cin>>t;

    while(t--){

        int n,m;
        cin>>n>>m;

        for(int i =0 ; i<n ; i++){
            for(int j =0 ; j<m ; j++){
                cin>>arr[i][j];
            }
        }

        bool flag = 1;

        for(int i = 0; i<n ;i++){
            for(int j = 0 ; j<m ; j++){
                for(int k = 0 ; k<4 ; k++){
                    if(possible('A'+k, i, j)) {
                        arr[i][j] = 'A' + k;
                        break;
                    }
                }

            }
        }

        for(int i =0 ; i<n ; i++){
            for(int j =0 ; j<m ; j++){
                cout<<arr[i][j];
            }
            cout<<"\n";
        }

    }

    return 0;
}