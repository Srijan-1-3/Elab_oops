/* Binita is playing a chess. The game will be played on a rectangular grid consisting of N rows and M columns. */

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    try{
    cin>>n;
    cin>>m;
    if(cin){
        cout<<n-1+(1+2*(n-1))*(m-1);
    }
    else 
    throw 0;
    }
    catch(int griddimensions)
    {
        cout<<"Invalid Grid Dimensions";
    }
	return 0;
}
