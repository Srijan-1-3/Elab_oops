/* Metha is a Chief accounting officer for the company. Its 1st of the month "Salary Day". */

#include <iostream>
using namespace std;
class Employee{
    public:
    int empno;
    char empname[20],empdsg[20];
    void emp(){
        cin>>empno>>empname>>empdsg;
    }
    void empdis(){
        cout<<"Emp number:"<<empno<<endl;
        cout<<"Emp name:"<<empname<<endl;
        cout<<"Emp designation:"<<empdsg<<endl;
    }
};
class Salary : private Employee
{    public:
    int a,b,c,d;
    void sal(){
        cin>>a>>b>>c>>d;
    }
    void dissal(){
        cout<<"Emp Net Pay:"<<a+b+c-d<<endl;
    }
};
class BankCredit : private Salary{
    public:
    char bank[10],ifsc[10],accno[10];
    void getBankDetails(){
        cin>>bank>>ifsc>>accno;
    }
    void display(){
        cout<<"Emp Bank:"<<bank<<"\nEmp IFSC:"<<ifsc<<"\nEmp Account Number:"<<accno;
    }
};
int main()
{Employee e;
Salary g;
BankCredit s;
e.emp();
g.sal();
s.getBankDetails();
e.empdis();
g.dissal();
s.display();
    return 0;
}
