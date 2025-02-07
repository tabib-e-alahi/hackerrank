
#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];

vector<pair<int,int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;
int cnt;
bool valid(int i, int j)
{
    if(i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

void dfs(int si, int sj)
{
    cnt++;
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
            if(grid[i][j] == '.')
            {
                v.push_back({i,j});
            }
        }
    }
    memset(vis, false, sizeof(vis));

    vector<int> cnt_v;
    for(pair<int,int> p: v)
    {
        cnt = 0;
        if(!vis[p.first][p.second])
        {
            dfs(p.first,p.second);
            cout << cnt <<endl;
            cnt_v.push_back(cnt);
        }
    }

    sort(cnt_v.begin(), cnt_v.end());

    if(!cnt_v.empty())
    {
        for(int x: cnt_v)
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
