/* Ravindran is employed in a multinational production firm as a general manager. */

#include <iostream>
using namespace std;
class Employee{
    public:
    int id;
    char name[15],role[15];
};
class Salary : public Employee
{
    public:
    int a,b,c,d,x;
    void getEmpDetails(){
        cin>>id>>name>>role;
    }
    void getPayDetails(){
        cin>>a>>b>>c>>d;
    }
    void calculate(){
        x=a+b+c-d;
    }
    void display(){
        cout<<"Employee Number:"<<id<<"\nEmployee Name:"<<name<<"\nEmployee Role:"<<role<<"\nEmployee Net Pay:"<<x;
    }
};
int main()
{
    Salary s;
    s.getEmpDetails();
    s.getPayDetails();
    s.calculate();
    s.display();

    return 0;
}
