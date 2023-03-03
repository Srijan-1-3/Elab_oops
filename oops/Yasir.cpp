/* Yasir has a lemons, b apples and c pears */

#include <bits/stdc++.h>
using namespace std;
class Cooking
{
    public:virtual void recipe()=0;
};
class FruitsRatio:public Cooking
{
    void recipe(){
       FruitsRatio obj;obj.recipe();}
};
int main()
{

     int a,b,c; cin>>a>>b>>c;
     b/=2; c/=4;
     a=min(a,min(b,c));
     cout<<7*a;
}
