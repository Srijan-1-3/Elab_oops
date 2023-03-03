/* Balaji's n friends are planning to spend the night at the house. */

#include <iostream>
using namespace std;
class StayatHome
{
  public:virtual void Beds()=0;
    int n,m,k,a=1,c=1;
    
};
class Friends:public StayatHome
{
    public :
    
    void Beds()
    {
            cin >> n >> m >> k;
            m-=n;
    while(m>0){
        if(k+a<=n) c++;
        if(k-a>=1) c++;
        m-=c;
        a++;
    }
    cout<<a;
    }
};
int main() {

    Friends obj;
  
     obj.Beds();
     return 0;
}
