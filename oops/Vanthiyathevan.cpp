/* Vanthiyathevan is going to escape from Thanjavur Palace, and he needs to plan it carefully. */

#include <iostream>
using namespace std;
template <class Palace>
Palace Paln(Palace p,Palace d,Palace t,Palace f,Palace c){
    double current=p*t;
    int ans=0;
    while(1){double T = (current)/(d-p);
        current+=p*T;
        if(current-c>0) break;
        else{
            current+=(T + f)*p;
            ans++;}   }
    return ans;}
int main()
{   double p,d,t,f,c;
    cin>>p>>d>>t>>f>>c;
    cout<<Paln(p,d,t,f,c);
}
