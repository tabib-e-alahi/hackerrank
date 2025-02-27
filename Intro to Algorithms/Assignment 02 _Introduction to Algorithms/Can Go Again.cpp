#include <bits/stdc++.h>
using namespace std;
class Edge
{
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
{
    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a, b, w;
            a = ed.a;
            b = ed.b;
            w = ed.w;

            if (dis[a] != INT_MAX && dis[a] + w < dis[b])
                dis[b] = dis[a] + w;
        }
    }

    bool cycle = false;
    for (auto ed : edge_list)
    {
        int a, b, w;
        a = ed.a;
        b = ed.b;
        w = ed.w;

        if (dis[a] != INT_MAX && dis[a] + w < dis[b])
        {
            cycle = true;
            break;
        }
    }

    if(cycle)
        cout << "Negative Cycle Detected\n";
    else{
        int q;
        cin >> q;
        while(q--)
        {
            int d;
            cin >> d;
            if(dis[d] == INT_MAX){
                cout << "Not Possible\n";
            }
            else{
                cout << dis[d] << endl;
            }
        }
    }    
}

int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edge_list.push_back(Edge(a, b, w));
    }
    for (int i = 0; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    int s;
    cin >> s;
    dis[s] = 0;

    bellman_ford();

    return 0;
}