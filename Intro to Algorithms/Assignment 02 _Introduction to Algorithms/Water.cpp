#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++)
        {
           int x;
           cin >> x;
           v.push_back({x,i});
        }
        
        sort(v.begin(), v.end(), greater<>());
        if(v[0].second < v[1].second)
            cout << v[0].second << " "<< v[1].second << endl;
        else    
            cout << v[1].second << " "<< v[0].second << endl;
        
    }
    return 0;
}