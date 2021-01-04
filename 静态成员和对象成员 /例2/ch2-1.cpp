#include <iostream>
#include<string>
#include"Student.h"

using namespace std;

int main()
{
    Student s(11,"li",16);
    Course c;
    Score sco;
    int sno,sgrade,cno,score;
    string sname,cname;
    cout<<"Input your no,name,grade:"<<endl;
    cin>>sno;
    cin>>sname;
    cin>>sgrade;
    cout<<"Input your course'no and its name,score:"<<endl;
    cin>>cno;
    cin>>cname;
    cin>>score;
    s.modify_sno(sno);
    s.modify_sname(sname);
    s.modify_sgrade(sgrade);
    c.modify_cno(cno);
    c.modify_cname(cname);
    sco.modify_score(score);
    cout<<"The student is:"<<endl;
    s.disp_student();
    c.disp_course();
    sco.disp_score();
    return 0;
}
