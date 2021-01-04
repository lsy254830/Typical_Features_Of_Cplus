#include <iostream>
#include"Box.h"

using namespace std;

int main()
{
    int l,w,h;
    cout<<"Input length,width,height:"<<endl;
    cin>>l>>w>>h;
    Box a(l,w,h);
    Box b(a);
    cout<<"a is:"<<endl;
    a.disp_vol();
    cout<<"b is"<<endl;
    b.disp_vol();
    return 0;
}
