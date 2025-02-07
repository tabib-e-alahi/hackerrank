#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];

vector<pair<int,int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;

bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m){
        return false;
    }
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for(int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == '.')
        {
            dfs(ci,cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if(grid[i][j] == '.'){
                v.push_back({i,j});
            }
        }
    }
    memset(vis, false, sizeof(vis));
    int cnt = 0;
    for(pair<int,int> p: v){
        if(!vis[p.first][p.second])
        {
            dfs(p.first,p.second);
            cnt++;
        }
    }

    cout << cnt <<endl;
    return 0;
}
