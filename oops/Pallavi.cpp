/* Pallavi is a Construction Engineer */

#include <iostream>
#include <iomanip>
using namespace std;
void l()
{printf("class Rectangle : private Area, private Perimeter");}
class Area
{
  
     public:float a,b;
    void get_data()
    {
        
        cin>>a>>b;}
    void area_calc()
    {cout<<setprecision(5)<<(a*b)<<endl;}
    
    void peri_calc()
    {cout<<setprecision(4)<<(2*(a+b))<<endl;}
};
class Perimeter
{};
class Rectangle : public Area, public Perimeter
{ };
int main()
{
Rectangle r;
r.get_data();
r.area_calc();
r.peri_calc();
	return 0;
}
