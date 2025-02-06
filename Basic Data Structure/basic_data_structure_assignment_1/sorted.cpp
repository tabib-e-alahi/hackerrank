#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
    cin >> n;
    vector<long long int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag =1;
    for(int i = 1; i < n; i++)
    {
        if(a[i-1] > a[i])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
    }

    return 0;
}



