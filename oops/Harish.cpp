/* Harish is a first-year engineering student in the CSE student */

#include <iostream>
using namespace std;
class arithmetic
{
    public:
    void getdata()
    {
    }
};
class plus1:public arithmetic
{
    public:
    void add()
    {
        int num1,num2,sum;
        cin>>num1>>num2;
        sum=num1+num2;
        cout<<"Sum of "<<num1<<" and "<<num2<<" is:"<<sum<<endl;
    }
};
class minus1
{
    public:
    void sub()
    {
        int num3,num4,diff;
        cin>>num3>>num4;
        diff=num3-num4;
        cout<<"Difference of "<<num3<<" and "<<num4<<" is:"<<diff;
    }
};
class result:public plus1, public minus1
{
};
int main()
{
    result z;
    z.getdata();
    z.add();
    z.sub();
    return 0;
}
