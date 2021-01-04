#ifndef BOX_H_INCLUDED
#define BOX_H_INCLUDED

class Box
{
    public:
        Box();
        Box(int l=1,int w=1,int h=1);
        Box(Box &);//拷贝构造函数
        bool disp_vol();
    private:
        int length;//长
        int width;//宽
        int height;//高
        int volume;//体积
};

#endif // BOX_H_INCLUDED
