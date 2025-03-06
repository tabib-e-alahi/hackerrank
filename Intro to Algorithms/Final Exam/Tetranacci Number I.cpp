#include<bits/stdc++.h>
using namespace std;

int dp[31];
int fibo(int n)
{
    if(n < 2) return n;
    else if(n < 4) return n - 1;
    if(dp[n] != -1)
        return dp[n];
    dp[n] = fibo(n-1) + fibo(n-2) + fibo(n-3) + fibo(n-4); 
    return dp[n];
}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}