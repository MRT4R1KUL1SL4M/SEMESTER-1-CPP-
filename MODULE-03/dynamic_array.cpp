#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student *tarik()
{
    Student *rcv=new Student(1, 1, 3.5);
    return rcv;
}
int main ()
{
    Student *ans=tarik();
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;
    delete ans;
    return 0;
}