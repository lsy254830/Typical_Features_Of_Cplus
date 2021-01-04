#include<iostream>
#include"Box.h"

using namespace std;

Box::Box()
{
        cout<<"call singel constructor"<<endl;
        length=width=height=0;
        volume=0;
}

Box::Box(int l,int w,int h)
{
        cout<<"call complic constructor"<<endl;
        length=l;
        width=w;
        height=h;
}
Box::Box(Box &p)//¿½±´¹¹Ôìº¯Êý
{
        cout<<"call copy constructor"<<endl;
        length=p.length/2;
        width=p.width/2;
        height=p.height/2;
}

bool Box::disp_vol()
{
        cout<<"length="<<length<<endl;
        cout<<"width="<<width<<endl;
        cout<<"height="<<height<<endl;
        volume=length*width*height;
        cout<<"volume="<<volume<<endl;
        return 0;
}

