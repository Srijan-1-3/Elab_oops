/* Nathan has the following two types of taxis: OLA Taxi and Fastrack Taxi */

#include <iostream>
using namespace std;
int main()
{
 int D,Oc,Of,Od,Fs,Fb,Fm,Fd;
 int Otaxi,Ftaxi,t;
 cin>>D;
 cin>>Oc>>Of>>Od;
 cin>>Fs>>Fb>>Fm>>Fd;
 t=D/Fs;
 Otaxi=Oc+(D-Of)*Od;
 Ftaxi= Fb+(t*Fm)+(D*Fd);
 if(Otaxi<Ftaxi)
     {
      cout<<"OLA Taxi";
     }
 else if(Otaxi>Ftaxi)
     {
      cout<<"Taxi detail missing";
     }
 else
     {
      cout<<"Fastrack Taxi";     
     }
	return 0;
}
