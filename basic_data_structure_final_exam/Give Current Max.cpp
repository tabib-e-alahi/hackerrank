#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if(l.marks < r.marks)
            return true;
        else if(l.marks > r.marks)
            return false;
        else
            return l.roll > r.roll;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for(int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int com;
        cin >> com;
        if(com == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if(com == 1)
        {
            if(pq.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
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
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
            }
        }
    }

    return 0;
}

