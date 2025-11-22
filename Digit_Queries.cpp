#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define int long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);

int arr[20];

signed main(){

    FAST
    int t = 1;
    cin>>t;
    int n = 9;
    for(int i = 0 ; i<18 ; i++){
        arr[i] = n * (i+1);
        n *= 10;
    }

    while(t--){

        int n;
        cin>>n;

        int temp = 1;

        for(int i = 0 ; i<18 ; i++){
            if(n - arr[i] > 0){
                n -= arr[i];
                temp *= 10;
                continue;
            }

            // <=/
            int div = i+1;
            int rem = (n + div - 1) / div;
            rem--;
            temp += rem;

            int val = n - rem * div;

            int place = i+1 - val;

            // cout<<place<<" "<<temp<<" "<<div<<" "<<n<<" "<<rem<<endl;
            while(place){
                temp /= 10;
                place--;
            }

            // cout<<place<<" "<<temp<<" "<<div<<" "<<n<<" "<<rem<<endl;


            cout<<temp%10<<"\n";
            break;


        }

    }

    return 0;
}