#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100001];
    while(cin.getline(ch, 100001))
    {
        int len = strlen(ch);
        int idx = 0;
        char s[100001] = "";
        for(int i = 0; i < len; i++)
        {
            if(ch[i] != ' ')
            {
                s[idx++] = ch[i];
            }
        }
         s[idx] = '\0';

        sort(s, s + idx);

        cout << s <<endl;
    }
}
