#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int a, b;
    long long int w;
    Edge(int a, int b, long long int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};
long long int dis[1005];
vector<Edge> edge_list;
int n, e;
bool cycle = false;

void bellman_ford()
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a, b;
            long long int w;
            a = ed.a;
            b = ed.b;
            w = ed.w;

            if (dis[a] != LLONG_MAX && dis[a] + w < dis[b])
                dis[b] = dis[a] + w;
        }
    }

    
    for (auto ed : edge_list)
    {
        int a, b;
        long long int w;
        a = ed.a;
        b = ed.b;
        w = ed.w;

        if (dis[a] != LLONG_MAX && dis[a] + w < dis[b])
        {
            cycle = true;
            break;
        }
    }

}

int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        edge_list.push_back(Edge(a, b, w));
    }
    for (int i = 0; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    int s;
    cin >> s;
    dis[s] = 0;

    bellman_ford();
    
    if(cycle)
    {
        cout << "Negative Cycle Detected\n";
    } 
    else{
        int q;
        cin >> q;
        while(q--)
        {
            int d;
            cin >> d;
            if(dis[d] == LLONG_MAX){
                cout << "Not Possible\n";
            }
            else{
                cout << dis[d] << endl;
            }
        }
    }  

    return 0;
}