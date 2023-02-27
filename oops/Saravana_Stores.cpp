/* Saravana Stores across the state have decided to give increment in wages of its employees */

#include <iostream>
using namespace std;
class Salary
{
 private:
  int finalsal, advance;
 public:
    int Increment(int sal)
    {cout<<sal<<endl;
     return 0;        }
    int Increment(int sal, int advance)
    {sal=sal+advance;  
     cout <<sal;
     return 0;   }
};
int main()
{Salary empsal;
 int cursal,bonus;
 cin>>cursal;
 cin>>cursal;
 cin>>bonus;
 empsal.Increment(cursal);
 empsal.Increment(cursal,bonus);   
	return 0;}
