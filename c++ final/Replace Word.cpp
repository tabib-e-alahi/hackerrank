#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;
        for(int j = 0; j < s.size(); j++)
        {
            int flag = 1;
                for(int k = 0; k < x.size(); k++)
                {
                    if(s[j+k] != x[k]){
                        flag = 0;
                        break;
                    }
                }

                if(flag == 1)
                {
                    s.replace(j, x.size(), "#");
                }
        }

        cout << s << endl;
    }
}

