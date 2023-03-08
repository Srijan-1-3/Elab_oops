/* To make paper airplane, one has to use a rectangular piece of paper.*/

#include <iostream>
#include <cmath>
using namespace std;
class Airplanes
{private:
  int a;
public:int Packs(int k,int n,int s,int p)    
{
 a=((k*n)/s)/p;
 cout<<a+1;
 return 0;}
};
int main()
{
Airplanes Buying;
int k,n,s,p;
cin>>k>>n>>s>>p;
Buying.Packs(k,n,s,p);
	return 0;
}
