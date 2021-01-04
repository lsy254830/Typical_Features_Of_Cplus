#include<iostream>
#include<string>
#include"Student.h"

using namespace std;

Student::Student(int no,string name,int grade)
{
        sno=no;
        sname=name;
        sgrade=grade;
        cout<<"Assigning student  "<<sname<<endl;
}
Student::~Student()
{
        cout<<"Destructing student  "<<sname<<endl;
}
bool Student::modify_sno(int x)
{
        sno=x;
        return 1;
}
bool Student::modify_sname(string x)
{
        sname=x;
        return 1;
}
bool Student::modify_sgrade(int x)
{
        sgrade=x;
        return 1;
}
bool Student::disp_student()
{
        cout<<sno<<' '<<sname<<' '<<sgrade<<endl;
        return 1;
}

Course::Course(int no,string name)
{
        cno=no;
        cname=name;
        cout<<"Assigning course  "<<cname<<endl;
}
Course::~Course()
{
        cout<<"Destructing course "<<cname<<endl;
}
bool Course::modify_cno(int x)
{
        cno=x;
        return 1;
}
bool Course::modify_cname(string x)
{
        cname=x;
        return 1;
}
bool Course::disp_course()
{
        cout<<cno<<' '<<cname<<' '<<endl;
        return 1;
}

Score::Score(int core)
{
        score=core;
        cout<<"Assigning score "<<score<<endl;
}
Score::~Score()
{
        cout<<"Destructing score "<<score<<endl;
}
bool Score::modify_score(int x)
{
        score=x;
        return 1;
}
bool Score::disp_score()
{
        cout<<score<<endl;
        return 1;
}
