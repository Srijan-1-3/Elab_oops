/* Johnson was working as a captain of the Giant Shop. */

#include <iostream>
using namespace std;
int main()
{int ndays,y,m,d;
 cin>>ndays;
 y=ndays/365;
 m=(ndays%365)/30;
 d=(ndays%365)%30;
 cout<<y<<" Y(s) "<<m<<" M(s) "<<d<<" D(s)";
	return 0;
}
