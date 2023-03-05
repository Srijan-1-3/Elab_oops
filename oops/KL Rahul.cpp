/* KL Rahul the class player of Indian Cricket Team have recently smashed a ton at Lords Cricket Ground and added his name into Honours Board. */

#include <iostream>
using namespace std;
void solve(){
 cout<<"class LCC:public exception throw strikerate;";
}
int main()
{
 int nor,nob;
 try{
 cin>>nor>>nob;
 if(nob>0){
 cout<<(nor/nob)*100;
 }
 else 
 throw 0;
 }
 catch(int e){
 cout<<"Invalid Ball Count";
 }
return 0;
}
