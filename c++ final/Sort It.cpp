#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student l, Student r)
{
    int total_marks_left = l.math_marks + l.eng_marks;
    int total_marks_right = r.math_marks + r.eng_marks;
    return (total_marks_left == total_marks_right) ? (l.id < r.id) : (total_marks_left > total_marks_right);

}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++)
    {
        cout << a[i].nm <<" " << a[i].cls<<" "  << a[i].s<<" "  << a[i].id<<" "  << a[i].math_marks<<" "  << a[i].eng_marks <<endl;
    }
}
