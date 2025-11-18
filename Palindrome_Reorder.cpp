#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main() {
    FAST
    string s;
    cin >> s;

    int n = s.size();
    int arr[26] = {0};

    for (auto x : s)
        arr[x - 'A']++;

    int oddCnt = 0;
    for (int i = 0; i < 26; i++)
        if (arr[i] & 1) oddCnt++;

    if ((n % 2 == 0 && oddCnt > 0) || (n % 2 == 1 && oddCnt > 1)) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string ans(n, ' ');
    int i = 0, j = n - 1;

    for (int k = 0; k < 26; k++) {
        while (arr[k] > 1) {
            ans[i++] = k + 'A';
            ans[j--] = k + 'A';
            arr[k] -= 2;
        }
    }

    for (int k = 0; k < 26; k++)
        if (arr[k] == 1)
            ans[n / 2] = k + 'A';

    cout << ans << "\n";
    return 0;
}
