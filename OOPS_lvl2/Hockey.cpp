/* Before the start of the hockey season in the Australia strange magic ritual is held */

#include <iostream>
using namespace std;
class Ritual
{ private:
    int i,j,a[100][100]; 
  public:
   int Magic(int n)
   {
    for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)  
        {
         if(i==j)
         cout<<" 0 ";
         else
         cout<<" "<<a[i][j]<<"";
        }
      }
    return 0;  
   }
};
int main()
{
 Ritual find;
 int n;
 cin>>n;
 find.Magic(n);
	return 0;
}
