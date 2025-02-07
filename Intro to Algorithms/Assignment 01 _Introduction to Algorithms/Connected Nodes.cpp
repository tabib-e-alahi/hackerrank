#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
    return a > b;
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];

    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        if(adj_list[x].empty())
            cout << -1 << endl;
        else
        {
            sort(adj_list[x].begin(), adj_list[x].end(), comp);
            for(int v:adj_list[x]){
                cout << v << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
