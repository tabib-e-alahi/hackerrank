#include <bits/stdc++.h>
using namespace std;
bool vis[1005];
int level[1005];

void bfs(int src, vector<vector<int>> adj_list)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        
        for(int child: adj_list[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
}


int main() {
    
    int q;
    cin >> q;
    while(q--)
    {
        int n, e;
        cin >> n >> e;
        vector<vector<int>> adj_list(n+1);
        while(e--)
        {
            int a, b;
            cin >> a >> b;
            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }
        int src;
        cin >> src;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        
        bfs(src, adj_list);
        
        for(int i = 1; i <= n; i++)
        {
            if(i != src)
                level[i] == -1 ? cout << level[i] << " " : cout << level[i]*6 << " ";
        }
        cout << endl; 
    }

}
