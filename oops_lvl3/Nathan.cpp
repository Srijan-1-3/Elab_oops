/* Nathan has the following two types of taxis: OLA and Fastrack. */

#include <iostream>
using namespace std;
int main()
{
int D,Oc,Of,Od,Fs,Fb,Fm,Fd; 
D=0;
float ola, fastrack;
cin>>Oc>>Of>>Od>>Fs>>Fb>>Fm>>Fd;
ola=Oc+(D-Of)*Od;
fastrack=Fb+(D/Fs)*Fm+D*Fd;
if(ola<fastrack){
cout<<"OLA Taxi";
}
else if(ola>fastrack){ 
cout<<"Fastrack Taxi";
}
else{
cout<<"Online Taxi";
}
return 0;
}
