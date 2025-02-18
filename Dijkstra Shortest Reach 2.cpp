// 100% not correct has TLC issue
#include <bits/stdc++.h>
using namespace std;
int dis[3005];

void dijkstra(int src, vector<vector<pair<int,int>>> adj_list)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    dis[src] = 0;
    while(!pq.empty())
    {
        pair<int,int> par = pq.top();
        pq.pop();
        
        int par_node = par.second;
        int par_dis = par.first;
        
        for(auto child: adj_list[par_node])
        {
            int child_node = child.first;
            int child_dis = child.second;
            if(par_dis + child_dis < dis[child_node])
            {
                dis[child_node] = par_dis + child_dis;
                pq.push({dis[child_node], child_node});
            }
        }
    }
}


int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
        int n, e;
        cin >> n >> e;
        vector<vector<pair<int,int>>> adj_list(n+1);
        while(e--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            adj_list[a].push_back({b, c});
            adj_list[b].push_back({a, c});
        }
        for(int i = 0; i <= n; i++)
        {
            dis[i] = INT_MAX;
        }
        
        int src;
        cin >> src;
        
        dijkstra(src, adj_list);
        
        for(int i = 1; i <= n; i++)
        {
            if(i != src)
                dis[i] == INT_MAX ? cout << -1 << " " : cout << dis[i] << " ";
        }
        cout << endl; 
    }

}
