/* Caleb and Irfan are purchasing apples which were priced according to their size. But their budget is minimum. */

#include <iostream>
using namespace std;
int main()
{  int apple1,apple2,apple3;
   try{
       cin>>apple1; cin>>apple2; cin>>apple3;
       if(cin)
        {
         if(apple1<apple2 && apple2<apple3)
           {
            cout<<"Fit into Budget";   
           }
         else
            cout<<"Dosen't fit into Budget";
        }
       else
        throw 0;
   }catch(int budget)
      { cout<<"Incomplete information";}
	return 0;
}
