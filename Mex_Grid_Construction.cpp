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

        set<int> st , temp;
        int n;
        cin>>n;

        for(int i = 0 ; i<=2*n ; i++){
            st.insert(i);
        }

        int arr[n][n];

        for(int i =0 ; i<n ; i++){
            for(int j =0 ; j<n ; j++){

                int val = -1;
                temp = st;
                for(int k = 0; k<j ;k++) temp.erase(arr[i][k]);
                for(int k = 0; k<i ; k++) temp.erase(arr[k][j]);

                val = *temp.begin();
                temp.erase(val);

                arr[i][j] = val;
            }
        }

        for(int i =0 ; i<n ; i++){
            for(int j =0 ; j<n ; j++){

                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }



    }

    return 0;
}