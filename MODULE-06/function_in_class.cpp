#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string nm,int ag)
        {
            name=nm;
            age=ag;
        }
        void print()
        {
            cout<<name<< " " <<age<<endl; 
        }
};
int main()
{
    Person rakib("Rakib Ahsan",24);    
    rakib.print();
}