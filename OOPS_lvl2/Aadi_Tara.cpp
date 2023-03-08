/* Aadi and Tara travel frequently around the world */

#include <iostream>
using namespace std;
int main()
{
    int month,numofdays;
    float roomrent,renttopay;
    cin>>month>>roomrent>>numofdays;
    if(month==4 or month==5)
    {
        renttopay=roomrent*numofdays + ((roomrent/100)*20)*numofdays;
        cout<<"Rs."<<renttopay<<".00";
    }
    else
    {renttopay=roomrent*(float)numofdays;
    
        cout<<"Rs."<<renttopay<<".00";
    }
    return 0;
}
