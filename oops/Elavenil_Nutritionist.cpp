/* Elavenil is a Nutritionist. In order to assist her patients effectively. */

#include <iostream>
using namespace std;
class Food{
};
class Nutritionist:public Food{
};
class Patient:public Nutritionist{
    public:
    float cal,fat;
    void calorie(){
        cin>>cal>>fat;
    }
    void dplan(){
        if(cal<fat)
        cout<<"Fatgrams cannot be less than 0 or greater than calories"<<endl;
        cout<<"Calories from fat: "<<fat*9/cal*100<<"%";
    }
};
int main()
{
    Patient p;
    p.calorie();
    p.dplan();
    return 0;
}
