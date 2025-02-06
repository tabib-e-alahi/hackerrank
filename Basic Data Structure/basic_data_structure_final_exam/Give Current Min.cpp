#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        pq.push(val);
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int com;
        cin >> com;
        if(com == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if(com == 1)
        {
            if(pq.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                cout << pq.top() << endl;
            }
        }
        else if(com == 2)
        {
            if(pq.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                pq.pop();
                if(pq.empty())
                {
                    cout << "Empty\n";
                }
                else
                {
                    cout << pq.top() << endl;
                }
            }
        }
    }

    return 0;
}
