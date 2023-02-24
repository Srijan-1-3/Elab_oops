/* Rajesh is running a construction on his own. Although he is a civil engineer, he loves to teach students. */

#include <iostream>
using namespace std;
class CheckTriangle
{
    private:
    int side1,side2,side3;
    public:
    void readCoordinates()
    {
     cin>>side1>>side2>>side3;
    }
    void isosceles()
    {
     if(side1==side2 || side1==side3 || side2==side3)
     cout<<"Can Form a ISOSCELES Triangle";
     else
     cout<<"Cant Form a ISOSCELES Triangle";
    }
};
int main()
{
    CheckTriangle consruct;
    consruct.readCoordinates();
    consruct.isosceles();
    
	return 0;}
