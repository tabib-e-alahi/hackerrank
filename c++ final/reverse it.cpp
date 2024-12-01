#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }
    for(int i = 0, j =n - 1; i < j; i++, j--)
    {
        swap(a[i].s, a[j].s);
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i].nm <<" " << a[i].cls<<" "  << a[i].s<<" "  << a[i].id<<endl;
    }
}
