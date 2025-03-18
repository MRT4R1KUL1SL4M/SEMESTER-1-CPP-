#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
	string name;
	int roll;
	string section;
	int math_marks;
	int cls;
    Student (string name,int roll,string section,int math_marks,int cls) 
    {
        this->name=name;
        this->roll=roll;
        this->section=section;
        this->math_marks=math_marks;
        this->cls=cls;
    }
};

int main() {
    Student penis ("Anis Ahmed",24,"Sunny",69,9);
    Student penis2 ("Penis Ahmed",69,"Mia",96,9);
    Student penis3 ("Heda Ahmed",96,"Johny",33,9);
    
    Student highest=penis;
    if(penis2.math_marks>highest.math_marks)
    {
        highest=penis2;
    }
    else if(penis3.math_marks > highest.math_marks)
    {
        highest=penis3;
    }
    cout<<"The student with the highest math marks is: " <<highest.name<<endl;

    return 0;
}