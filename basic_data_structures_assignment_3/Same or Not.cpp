#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    bool isSame = true;
    if(n != m){
       isSame = false;
    }
    else{
        stack<int> st;
        for(int i = 0; i < n; i++){
            int v;
            cin >> v;
            st.push(v);
        }
        queue<int> q;
        for(int i = 0; i < m; i++){
            int v;
            cin >> v;
            q.push(v);
        }
        while(!st.empty()){
                if(st.top() != q.front()){
                    isSame = false;
                    break;
                }
                else{
                    st.pop();
                    q.pop();
                }
        }

    }
    if(isSame == true){
        cout << "YES\n";
    }
    else
        cout << "NO\n";

    return 0;
}
