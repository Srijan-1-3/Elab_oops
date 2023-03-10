/* Johit has two rectangles. The lengths of the vertical sides of the first rectangle are 'A' and the lengths of the horizontal sides of the first rectangle are 'B' */

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{int a,b,c,d,ar1,ar2;
 try{cin>>a>>b>>c>>d;
     if(cin)
      {
       ar1=a*b; ar2=c*d;
       if(ar1!=ar2)
       (ar1>ar2)?cout<<ar1:cout<<ar2;
       else
       cout<<ar1;
      }
     else
       throw 0;
    }catch(int area) {cout<<"Input Data Missing";    }

	return 0;
}
