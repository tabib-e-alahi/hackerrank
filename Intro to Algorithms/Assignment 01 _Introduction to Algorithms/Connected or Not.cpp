#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];
    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++){
            if(i == j)
                adj_mat[i][j] = 1;
            else
                adj_mat[i][j] = 0;
        }
    }
    
    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
    }
    
    int q;
    cin >> q;
    while (q--) {
        int src, dst;
        cin >> src >> dst;

        if(adj_mat[src][dst] == 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}