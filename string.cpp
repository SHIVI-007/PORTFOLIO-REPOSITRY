#include<iostream>
using namespace std;
class str
{
    private:
    string st1;
    public:

    str(string st2="null")
    {
        st1=st2;
    }

    str operator+(str c)
    {
        str tem;
        return tem.st1=st1+c.st1;
    }

    void print()
    {
        cout<<"concatenated string is :"<<st1;
    }

};
int main()

{
    string p1,p2;
    cout<<"Enter two  string p1 and p2 to concatenate :";
    cin>>p1>>p2;


   str s1(p1),s2(p2);
   str s3=s1+s2;
   cout<<endl;
   s3.print();
}