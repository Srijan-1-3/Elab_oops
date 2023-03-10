/* Atifa would like to withdraw X INR from an ATM */

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ float amtreq,iniamt;
  try{
      cin>>amtreq; cin>>iniamt;
      if(cin){
              if(iniamt>=amtreq)
                {
                 cout<<"Current Balance : "<<fixed<<setprecision(2)<<iniamt-amtreq-0.50<<endl;
                 cout<<"Initial Balance : "<<fixed<<setprecision(2)<<iniamt;
                }
              else
                {
                 cout<<"Current Balance : "<<iniamt-0.50;
                 cout<<"Initial Balance : "<<iniamt;
                }
             }
      else        
         throw 0;
  }catch(int Balance) {cout<<"Incomplete Account Information";}    
	return 0;
}
