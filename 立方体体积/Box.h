#ifndef BOX_H_INCLUDED
#define BOX_H_INCLUDED

class Box
{
    public:
        Box();
        Box(int l=1,int w=1,int h=1);
        Box(Box &);//�������캯��
        bool disp_vol();
    private:
        int length;//��
        int width;//��
        int height;//��
        int volume;//���
};

#endif // BOX_H_INCLUDED
