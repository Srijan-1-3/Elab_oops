/* Ragu requires basic staff information in order to properly mantain the files.*/

#include <iostream>
using namespace std;
class person
{
 public:
 string  fname,lname,sex,inst,deg;
 int age;
 void input_person();
 void display_person();
};
class student: public person
{
 public:
  void input_student();
  void display_student();
}; 
 void person::input_person()
 {
  cin>>fname>>lname>>sex>>age>>inst>>deg;
 }
 void person::display_person()
 {
  cout<<"\nFirst Name:"<<fname;
  cout<<"\nLast Name:"<<lname;
  cout<<"\nGender:"<<sex;
  cout<<"\nAge:"<<age;
  cout<<"\nCollege:"<<inst;
  cout<<"\nLevel:"<<deg;
 }
int main()
{
 student s;
 s.input_person();
 s.display_person();
	return 0;
	 s.input_student();
 s.display_student();
}
