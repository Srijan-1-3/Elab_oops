/* Vishal is fighting with a monster. The health of the monster is H. */

#include <iostream>
using namespace std;
int main()
{ int a,h,m;
  try{
      cin>>h>>a;
      if(cin)
        {
         if(h%a==0)
          {
           m=h/a;
           cout<<m;
          }
         else if(h%a>0)
          {
           m=(h/a)+1;
           cout<<m;
          }
        }
      else
       throw 0;
  }catch(int n) {cout<<"Missing Input Data";}

	return 0;
}
