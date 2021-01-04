#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include<string>

using namespace std;


class Course
{
    public:
        Course(int no=0,string name="no name");
        ~Course();
        bool modify_cno(int x);//修改函数
        bool modify_cname(string x);
        bool disp_course();
    private:
        int cno;
        string cname;
};
class Score
{
    public:
        Score(int core=0);
        ~Score();
        bool modify_score(int x);
        bool disp_score();
    private:
        int score;
};
class Student
{
    public:
        Student(int no=0,string name="no name",int grade=0,
                int ccno=0,string ccname="no name",int sscore=0);
        ~Student ();
        bool modify_sno(int x);//修改函数
        bool modify_sname(string x);
        bool modify_sgrade(int x);
        bool disp_student();
        bool modify_course_score(int,string,int);
    private:
        int sno;//int类型的数据可以存放课程号10位以内
        string sname;
        int sgrade;
        Course scourse;
        Score sscore;
};



#endif // STUDENT_H_INCLUDED
