#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    person(string nm,int ag,int m1,int m2)
    {
        name=nm;
        age=ag;
        marks1=m1;
        marks2=m2;
    }
    void hello()
    {
        cout << name << " "<<age<<endl;
    }
// int total_marks()
// {
//     return marks1 + marks2;
// }
};

int  main()
{
    person t("Tarik Islam",22,89,98);
    t.hello();
    return 0;
}