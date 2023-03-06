/* Prof. Geetha is a Head of the Department in the famous institution in the city */

#include <iostream>
using namespace std;
class student
 {
  public:   
  string name;
  int rno;   
 };
class employee
 {
   public:
   string inter,deg; 
   void display();
 };
 void employee::display()
 {
   //Random 
 }
class project:public student,public employee
 {
  public:
  void getcompany()
  {
    cin>>name>>rno>>inter>>deg;  
  }
  void getpdegree()
  {
   cout<<"\nName:"<<name;
   cout<<"\nRoll no:"<<rno;
   cout<<"\nInternship:"<<inter;
   cout<<"\nDegree:"<<deg;      
  }
 };
int main()
{
 project p1;
 p1.getcompany();
 p1.getpdegree();
 p1.employee::display();
 return 0;
}
