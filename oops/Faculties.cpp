/* Faculties in most of the Higher Technical Universities has a tedious task of taking attendance where students 
   do all the tricks to put proxy */

#include <iostream>
using namespace std;
class Attendance{
    public:Attendance(){cout<<"No Attendance"<<endl;}
    Attendance(string name){cout<<"Hello "<<name<<endl;}
};
int main()
{
    string studentname;
    cin>>studentname;
    Attendance stdabs; 
    Attendance stdpst(studentname);

    return 0;
}
