#include<bits/stdc++.h>
using namespace std;
class Edge{
    public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};
int dis[1005];
vector<Edge> edge_list;
int n, e;

void bellman_ford()

int main()
{
    cin >> n >> e;
    while(e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edge_list.push_back(Edge(a, b, w));
    }
    for(int i = 0; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    int s;
    cin >> s;
    dis[s] = 0;
    
    bellman_ford();

    return 0;
}