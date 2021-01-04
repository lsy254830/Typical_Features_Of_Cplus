#include <iostream>
#include<string>
#include"Student.h"

using namespace std;

int main()
{
    Student s(11,"lisiyi",16,01,"c++",90);
    s.modify_sno(44);
    s.modify_sname("wang feifei ");
    s.modify_sgrade(55);
    int cno,core;
    string  cname;
    cout<<"Input your course's no and its name,score:"<<endl;
    cin>>cno;
    cin>>cname;
    cin>>core;
    s.modify_course_score(cno,cname,core);
    s.disp_student();
    return 0;
}
