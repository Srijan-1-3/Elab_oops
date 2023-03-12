/* Yasir was making a kite. */

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{float s1,s2,s3,s,area;
 cin>>s1>>s2>>s3;
 s=(s1+s2+s3)/2;
 area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
 cout<<fixed<<setprecision(2)<<area;
	return 0;
}
