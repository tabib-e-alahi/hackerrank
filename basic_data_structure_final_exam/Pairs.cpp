#include<bits/stdc++.h>
using namespace std;

bool comp(pair<string, int> p1, pair<string, int> p2)
{
    if(p1.first < p2.first){
        return true;
    }
    else if(p1.first > p2.first){
        return false;
    }
    else{
        return p1.second > p2.second;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), comp);

    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}

