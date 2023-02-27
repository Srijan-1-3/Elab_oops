/* Saravanan wants to check his wrist watch time and clock in his car displayed a same time or not */

#include <iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
    Time()
    {
        cin>>h>>m>>s;
    }
    void check()
    {
        if(h>23 || m>59 ||s>59 )
            cout<<"Invalid time format\n";
    }
    bool operator ==(Time t2);
};
bool Time::operator==(Time t2)
{
    if(h==t2.h && m==t2.m && s==t2.s)
        return true;
    else
        return false;
}
int main()
{
    Time t1,t2;
    t1.check();
    t2.check();
    if(t1==t2)
        cout<<"Both clocks are showing the same time";
    else
        cout<<"Clocks are showing different times";
	return 0;
}
