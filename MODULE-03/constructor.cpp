#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int rollno;
    int cls;
    double gpa;
    Student (int r, int c, double g)
    {
        rollno=r;
        cls=c;
        gpa=g;
    }
};
int main() {
    Student anis(24,10,4.96);
    Student tarik(01,10,4.69);
    Student ttt(69,69,6.9);

    cout<<anis.rollno<<" "<<anis.cls<<" "<<anis.gpa<<endl;
    return 0;
}