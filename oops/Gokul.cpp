/* Gokul is going to celebrate his daughter's tenth birthday this week. */

#include <iostream>
using namespace std;
class Time
{
  public:
  int h,m,s;
  void intime()
  {
      cin>>h>>m>>s;
  }
};
class addTime : public Time
{
    public:
    void outtime()
    {
        cout<<h<<":"<<m<<":"<<s;
    }
};
int main()
{
    addTime T;
    T.intime();
    T.outtime();
    return 0;
}
