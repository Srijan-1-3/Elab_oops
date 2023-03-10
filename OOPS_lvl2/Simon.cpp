/* Simon was working in a Casa Grande */

#include <iostream>
using namespace std;
int main()
{ int side1,side2,side3;
  try{ 
      cin>>side1; cin>>side2; cin>>side3;
      if(cin){
              if(side1!=side2 && side2!=side3 && side1!=side3)
              cout<<"Scalene triangle";
              else if(side1==side2 && side2==side3 && side1==side3) 
              cout<<"Equilateral triangle"; 
              else
              cout<<"Isosceles triangle"; 
             }
      else 
         throw 0;
     }catch(int sides) {cout<<"Invalid Sides";}
	return 0;
}
