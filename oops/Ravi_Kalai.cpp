/* Ravi and Kalai start to jog around a circular stadium. The complete their rounds in x seconds, y seconds respectively. */

#include <iostream>
using namespace std;
void l() {}
int main() {
   int a,b,lcm;
 cin>>a>>b;
   if(a>b)
   lcm = a;
   else
   lcm = b;
   while(1) {
      if( lcm%a==0 && lcm%b==0 ) {
         cout<<lcm;
         break;
      }
      lcm++;
   }
   return 0;
   cout<<"Stadium operator - (Stadium obj2) do";
}
