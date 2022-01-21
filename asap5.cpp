#include<iostream>
using namespace std;
class Tringle
{
    int base , height;
    float area;
    public:
    Tringle(int b,int h)
    {
        base=b;
        height=h;
        area=0.5*base*height;
        
    }
    void print()
    {
        cout<<"\nBase is :"<<base<<"\nheight is :"<<height<<"\nArea of traingle :"<<area<<endl;

    }
    int getBase() 
    {
        return base;
    }
    int getHeight()
    {
        return height;
    }
};
 

class Rectangle
{
    int width , length,area;
    public:
    Rectangle(int w,int l)
    {
        width=w; 
        length=l;
        area=width*length;
    }
    void output()
    {
        cout<<"\nlength is :"<<length<<"\nwidth is :"<<width<<"\nArea of Rectangle :"<<area<<endl;

    }
    Rectangle(Tringle t)
    {
        width=t.getBase();
        length=t.getHeight();
        area=width*length;

    }

};

int main()
{
    int m,n;
    cout<<"Please enter two values for rectangle (width/length) and traingle (base/height) :";
    cin>>m>>n;
    Tringle t(m,n);
    Rectangle r=t;
    t.print();
    r.output();
    return 0;
}