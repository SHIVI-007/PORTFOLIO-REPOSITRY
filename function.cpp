#include<iostream>
using namespace std;

int area(int n,int m)
{
    int ar;
    return ar=n*m;

}

int area(int n)
{
    int ar;
    return ar=n*n;

}
int main()
{
    int l,b,n,result;
    cout<<"Enter \n 1.Rectangle \n 2.square "<<endl;
    cin>>n;
    switch(n)
    {
        case 1: {
            
            cout<<"Enter the length and brith"<<endl;
            cin>>l>>b;
            cout<<endl;
            result = area(l,b);
            cout<<"the are is : "<<result;
            break;
    
            
        }
        case 2:{

            cout<<"Enter the side"<<endl;
            cin>>l;
            cout<<endl;
            result = area(l);
            cout<<"the area is :"<<result;
            break;
             
             }
        
    }
 
  return 0;
}



