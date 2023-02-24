/* Bhagavan the govt school teacher from Tamil Nadu is so involved in his students development which in turn even forced the tamil nadu educational department to 
   cancel his transfer from his old school on the request of his students */

#include <iostream>
using namespace std;
class student
{
  string name;
  int roll;
  float height,weight;
  public: 
  student(){name="Bhagavan";roll=1593;height=172.5;weight=60.4;}    
  void displaydata()
   {
    cin>>name>>roll>>height>>weight;   
    cout<<endl<<name<<" "<<roll<<" "<<height<<" "<<weight;
   }
};
 int main()
{
 student s1,s2;
 s1.displaydata();
 s2.displaydata();
 return 0;
}
