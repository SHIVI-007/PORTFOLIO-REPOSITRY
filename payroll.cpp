#include<iostream>
using namespace std;
class payroll
{
    private:
    int rate,hours,days,salary,fd,tax,total;
    public:
    void getdata();
    void calculate();
    friend void showpayroll(payroll&);

};
void payroll::getdata()
{
    cout<<"please enter rate for per hour to pay  :";
    cin>>rate;
    cout<<"please enter hours of work  :";
    cin>>hours;
    cout<<"please enter days of work  :";
    cin>>days;

}

void payroll ::calculate()
{
    salary=rate*hours*days;

    fd=salary*.05;
    tax=salary*.05;

    total = fd+tax;

    salary=salary-total;

}

void showpayroll( payroll& x)

{
    cout<<endl;
    cout<<"total salary for pay is :"<<x.salary<<endl;
    cout<<"salary deducted for fd is :"<<x.fd<<" and tax is : "<<x.tax<<endl;
    cout<<"total salary deducted is :"<<x.total;




}

int main()
{
  payroll obj;
  obj.getdata();
  obj.calculate();
  showpayroll(obj);
}