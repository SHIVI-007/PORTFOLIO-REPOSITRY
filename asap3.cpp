#include<iostream>
using namespace std;
class Number
{
    int n;
    public:
    void printDetails()
    {
        cout<<n;
    }
    Number(int n)
    {
        this->n=n;
    }
    operator int()
    {
        return n;
    }
};

int main()
{
    Number numb=200;
    numb.printDetails();
    int x=numb;
    cout<<"\nthe value is :"<<x;
    return 0;
}