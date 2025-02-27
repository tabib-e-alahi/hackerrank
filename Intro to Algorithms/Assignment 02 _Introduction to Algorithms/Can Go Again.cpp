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

int main()
{
    cin >> n >> e;
    while(e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edge_list.push_back(Edge(a, b, w));
    }

    for(auto ed: edge_list)
    {
        cout << ed.a << " " << ed.b << " " << ed.w << endl;
    }
}