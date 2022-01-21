#include<iostream>
using namespace std;
class arr
{
    private:
    int ar[2][2];
    int i,j;
    public:
    void getar();
    void add(arr obj1,arr obj2);
    void put();
};
void arr :: getar()
{
 
    for( i =0;i<2;i++)
    {
        for( j =0;j<2;j++)
        {
            cout<<"enter the value :"<<i<<j<<"  :";
            cin>>ar[i][j];
        }
    }
}
    
void arr :: add(arr obj1,arr obj2)
{
 for( i =0;i<2;i++)
    {
        for( j =0;j<2;j++)
        {
            
            ar[i][j]=obj1.ar[i][j]+obj2.ar[i][j];
        }
    }
}

void arr :: put()
{
    cout<<endl;
    for( i =0;i<2;i++)
    {
        for( j =0;j<2;j++)
        {
            
            cout<<endl<<i<<j<<"  :"<<ar[i][j];
        }
    }
}
int main()

{
arr obj1,obj2,obj3;
cout<<"enter value of  1st array "<<endl;
obj1.getar();
cout<<endl<<"enter value of 2nd array "<<endl;
obj2.getar();
obj3.add(obj1,obj2);
cout<<endl<<"total value is :";
obj3.put();
return 0;
}