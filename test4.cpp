
#include <iostream>  
using namespace std; 
float cake(float wei,float dis);

int main ()
 {  


  
/* variable decleration;*/
float kg,trans,total;
/* asking the valued from biller;*/

cout<<"please enter the weight of cake in kg  :";
cin>>kg;
cout<<"please enter the distance in km :";
cin>>trans;
total = cake(kg,trans);
cout<<total;
return 0;
 }



float cake(float wei,float dis)

  
{
    /*the cost of 1 kg cake is 740 and 1 km distance cost is 7 rs*/

  float kp, transe,total1;
     
     kp = wei*740;
     transe = dis*7;

     return total1 = kp+transe;
  }

 
