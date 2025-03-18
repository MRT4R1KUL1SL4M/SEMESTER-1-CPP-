#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name [100];
    int rollno;
    int age;
};
int main() {
    Student a;
    cin.getline(a.name,100);
    cin>>a.rollno>>a.age;

    Student b;
    getchar();
    cin.getline(b.name,100);
    cin>>b.rollno>>b.age;

    cout<<a.name<<" "<<a.rollno<<" "<<a.age<<" "<<endl;
    cout<<b.name<<" "<<b.rollno<<" "<<b.age<<" "<<endl;
    return 0;
}