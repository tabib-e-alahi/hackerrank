#include<bits/stdc++.h>

using namespace std;

int size_count(list < int > l) {
    int cnt = 0;
    for (auto it = l.begin(); it != l.end(); it++) {
        cnt++;
    }
    return cnt;
}

int main()
{
    list < int > l;
    int n;
    cin >> n;
    while (n--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
            // cout <<"Size: "<< l.size() << endl;
            int sz_cnt = size_count(l);
            if (v < sz_cnt)
            {
                l.erase(next(l.begin(), v));
            }
        }

        cout << "L -> ";
        for (int val: l)
        {
            cout << val << " ";
        }
        cout << endl;
        list < int > l2(l);
        l2.reverse();
        cout << "R -> ";
        for (int val: l2)
        {
            cout << val << " ";
        }
        cout << endl;
    }

}
