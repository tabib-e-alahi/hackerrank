#include<bits/stdc++.h>
using namespace std;

bool check_input(string s)
{
    stack<char> st;
    for(char c: s){
        if(!st.empty())
        {
            if(c == '1' && st.top() == '0'){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        else{
            st.push(c);
        }
    }

    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        bool isValid = check_input(s);
        if(isValid){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
return 0;
}
