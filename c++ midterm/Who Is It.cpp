#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    double total_marks;


};
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        Student a, b, c;
        cin >> a.id >> a.name>> a.section >> a.total_marks;
        cin >> b.id >> b.name>> b.section >> b.total_marks;
        cin >> c.id >> c.name>> c.section >> c.total_marks;
        if(a.total_marks > b.total_marks && a.total_marks > c.total_marks)
        {
            cout <<a.id << " " << a.name << " "<< a.section << " " << a.total_marks << endl;
        }
        else if(a.total_marks < b.total_marks && b.total_marks > c.total_marks)
        {
            cout <<b.id << " " << b.name << " "<< b.section << " " << b.total_marks << endl;
        }
        else if(a.total_marks < c.total_marks && b.total_marks < c.total_marks)
        {
            cout <<c.id << " " << c.name << " "<< c.section << " " << c.total_marks << endl;
        }
        else if(a.total_marks == c.total_marks && b.total_marks == c.total_marks)
        {
            int smalled_id = min({a.id, b.id, c.id});
            if(smalled_id == a.id)
            {
                cout <<a.id << " " << a.name << " "<< a.section << " " << a.total_marks << endl;
            }
            else if(smalled_id == b.id)
            {
                cout <<b.id << " " << b.name << " "<< b.section << " " << b.total_marks << endl;
            }
            else
            {
                cout <<c.id << " " << c.name << " "<< c.section << " " << c.total_marks << endl;
            }
        }
        else if(a.total_marks == b.total_marks && a.total_marks != c.total_marks)
        {
             int smalled_id = min(a.id, b.id);
             smalled_id == a.id ? cout <<a.id << " " << a.name << " "<< a.section << " " << a.total_marks << endl : cout <<b.id << " " << b.name << " "<< b.section << " " << b.total_marks << endl;
        }
        else if(a.total_marks == c.total_marks && a.total_marks != b.total_marks)
        {
             int smalled_id = min(a.id, c.id);
             smalled_id == a.id ? cout <<a.id << " " << a.name << " "<< a.section << " " << a.total_marks << endl; : cout <<c.id << " " << c.name << " "<< c.section << " " << c.total_marks << endl;
        }
        else if(b.total_marks == c.total_marks && a.total_marks != b.total_marks)
        {
             int smalled_id = min(b.id, c.id);
             smalled_id == b.id ? cout <<b.id << " " << b.name << " "<< b.section << " " << b.total_marks << endl; : cout <<c.id << " " << c.name << " "<< c.section << " " << c.total_marks << endl;
        }
    }

}
