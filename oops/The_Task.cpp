/* The task is to overload / operator to divide the fraction by other fraction */

#include <iostream>
using namespace std;
class Fraction{
    public:
    int num,den;
    Fraction(int n=0, int d=0)
    {
        num=n;
        den=d;
    }
    Fraction operator /(Fraction const &obj){
        Fraction res;
        res.num=num * obj.den;
        res.den=den * obj.num;
        return res;
    }
    void display1(){
        cout<<num/den;
    }
    void display2(){
        cout<<num<<"/"<<den;
    }
    void display3(){
        cout<<"Error";
    }
};
int main()
{
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    Fraction ob1(a,b), ob2(c,d);
    Fraction ob3 = ob1/ob2;
    if(ob1.den==0 || ob2.den==0){
        cout<<"Error";
        return 0;
    }
    if(ob3.den==1)
    ob3.display1();
    else{
        for(int i=2;i<50;i++)
        {
            if(ob3.num%i==0 && ob3.den%i==0)
            {
                ob3.num=ob3.num/i;
                ob3.den=ob3.den/i;
            }
        }

    ob3.display2();
    }

    return 0;
}
