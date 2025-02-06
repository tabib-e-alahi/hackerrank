#include<bits/stdc++.h>
using namespace std;

bool comp(pair<string, int> p1, pair<string, int> p2)
{
    if(p1.second >= p2.second){
        return true;
    }
    else if(p1.second < p2.second){
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string,int> mp;
        vector<pair<string,int>> v;
        while(ss >> word){
            mp[word]++;
        }
        for(auto it = mp.begin(); it != mp.end(); it++){
            v.push_back({it->first, it->second});
        }
        sort(v.begin(), v.end(), comp);
        for(pair<string,int> p: v){
            cout << p.first << " " << p.second <<endl;
        }
    }
}
