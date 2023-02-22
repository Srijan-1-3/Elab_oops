/* Armstrong was one of the greatest scientist */

#include <iostream>
using namespace std;
int main()
{
  int number,temp,aux,sum=0;
  cin>>number;
  temp=number;
  while(number)
  {
    aux=number%10;
    aux=aux*aux*aux;
    sum=sum+aux;
    number=number/10;
  }
  if(temp==sum)
    cout<<"Part of Memorable Coin";
  else
    cout<<"Not a Part of Memorable Coin";
    
 return 0;
}
