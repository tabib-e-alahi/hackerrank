#include <bits/stdc++.h>
using namespace std;

int dp[100005];
long long int x;

bool makeIt(int n) {
    if (n > x) return false;
    if (n == x) return true;

    if (dp[n] != -1) return dp[n];

    bool add = makeIt(n + 3);
    bool mul = makeIt(n * 2);

    return dp[n] = add || mul;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cin >> x;
        memset(dp, -1, sizeof(dp));
        if (makeIt(1)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
