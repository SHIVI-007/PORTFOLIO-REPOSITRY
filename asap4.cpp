#include<iostream>
using namespace std;
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

};
class Traingle
{
    int base , height;
    float area;
    public:
    Traingle(int b,int h)
    {
        base=b;
        height=h;
        area=0.5*base*height;
        
    }
    void print()
    {
        cout<<"\nBase is :"<<base<<"\nheight is :"<<height<<"\nArea of traingle :"<<area<<endl;

    }
    operator Rectangle()
    {
        Rectangle temp(base,height);
        return temp;
    }
};
 
int main()
{
    int m,n;
    cout<<"Please enter two values for rectangle (width/length) and traingle (base/height) :";
    cin>>m>>n;
    Traingle t(m,n);
    Rectangle r=t;
    t.print();
    r.output();
    return 0;
}