/* There was a high voltage war between the Adithiya Karikalan's troop and Veerapandian's troops. */

#include<bits/stdc++.h>
#define NegativeNumber int
using namespace std;
int main()
{
 float akt,vpt;
 try{
 cin>>akt;
 cin>>vpt;
 if(vpt>0)
 {
 cout<<"Each Chola Warrior must fight "<<fixed<<setprecision(5)<<akt/vpt<<" Pandiya Warriors";
 }
 else
 throw 0;
 }
 catch(NegativeNumber e){
 cout<<"Chola Troops Need Help";
 }
return 0;
}
