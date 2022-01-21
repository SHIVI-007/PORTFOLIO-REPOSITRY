#include<iostream>
#include<fstream>
using namespace std;
int main()
{   string fer,jer,gh;
    fstream tw;
    tw.open("sample.txt",ios::app|ios::in|ios::out);
    cout<<"enter the text"<<endl;
    getline(cin,fer);
    tw<<fer;
    
    
    cout<<"enter enter text is "<<endl;

    
   
    tw.seekg(0,ios::beg);
    
   while( getline(tw,jer)){
    
    cout<<jer;
    tw.close();
   }
   
    return 0;




}