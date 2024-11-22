#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, s;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> n >> s;
        int a[n];
        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int flag = 0;
        for(int x = 0; x < n-2; x++)
        {
            for(int y = x + 1; y < n-1; y++)
            {
                long long int sum = 0;
                for(int z  =y + 1; z < n; z++)
                {
                    sum = a[x] + a[y] + a[z];
                    if(sum == s)
                    {
                        flag =1;
                        break;
                    }
                }
                if(flag == 1)
                {
                    break;
                }
            }
        }

        if(flag == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

    }

}
