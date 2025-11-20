#include <bits/stdc++.h>
using namespace std;

char arr[8][8];
set<int> cols;
set<int> diag1;  // r + c
set<int> diag2;  // r - c

int solve(int r) {
    if (r == 8) return 1;  // placed all 8 queens

    int ans = 0;

    for (int c = 0; c < 8; c++) {

        if (arr[r][c] == '*') continue;
        if (cols.count(c)) continue;
        if (diag1.count(r + c)) continue;
        if (diag2.count(r - c)) continue;

        // choose
        cols.insert(c);
        diag1.insert(r + c);
        diag2.insert(r - c);

        ans += solve(r + 1);

        // unchoose
        cols.erase(c);
        diag1.erase(r + c);
        diag2.erase(r - c);
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> arr[i][j];
        }
    }

    cout << solve(0) << "\n";
    return 0;
}
