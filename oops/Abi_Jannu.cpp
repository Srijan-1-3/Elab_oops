/* Abi and Jaanu are off to the wedding of a close relative */

#include <iostream>
using namespace std;
class partner{
    public:
    void findpartner(){
       int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a=0;
        a=n%8;
        if(a==3)
        cout<<n+3<<"UB"<<endl;
        else if(a==6)
        cout<<n-3<<"UB"<<endl;
        else if(a==2)
        cout<<n+3<<"MB"<<endl;
        else if(a==5)
        cout<<n-3<<"MB"<<endl;
        else if(a==1)
        cout<<n+3<<"LB"<<endl;
        else if(a==4)
        cout<<n-3<<"LB"<<endl;
        else if(a==7)
        cout<<n+1<<"SU"<<endl;
        else if(a==0)
        cout<<n-1<<"SL"<<endl;    }  }
};
int main()
{   partner travel;
travel.findpartner();
    return 0;
}
