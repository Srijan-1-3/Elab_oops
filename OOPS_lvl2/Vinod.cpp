/* The window of Vinod's room has a width of 'A' */

#include <iostream>
using namespace std;
int main()
{int a,b,r;
 try{
     cin>>a>>b;
     if(cin)
       {
        r=a-b*2;
        if(r!=0 && r<a)
          cout<<r;
       }
     else
       throw 0;
    }catch(int n) {cout<<"Need Required Input";}
	return 0;
}
