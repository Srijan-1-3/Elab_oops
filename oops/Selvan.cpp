/* Selvan was playing with the a object of random size for stress relief */

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    try{
        cin>>a>>b>>c;
        if(cin){
            d=a*b+b*c+c*a;
            cout<<2*d;
        }
        else 
        throw 0;
    }
    catch(int objectinfo){
        cout<<"Incomplete information about the object";
    }
    return 0;
}
