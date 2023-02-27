/* Janani the officer in the City union bank is responsible for creating new accounts to its customers */

#include <bits/stdc++.h>
using namespace std;
class AccBalance
{
  public:
AccBalance(){cout<<"Zero Balance"<<endl;}
  AccBalance(float bal)
  {
    if(bal>0)
      cout<<"Has a Positive Balance";
    else if(bal<0)
      cout<<"Has a Negative Balance";
    else
      cout<<"Has a Zero Balance";
  }
};
int main()
{
  float balance;
  cin>>balance;
  AccBalance defltBal;
  AccBalance currBal(balance);
  return 0;
}
