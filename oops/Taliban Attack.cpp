/* As a result of recent Taliban Attack on Afgan Magical Clock the Central attraction of the city Kabul is damaged */

#include <iostream>

#include<cmath>

using namespace std;
template <class Hole>
Hole MagicClocl(Hole x,Hole y){
    int c;
    c=sqrt(x*x+y*y);
    if(c*c==x*x+y*y){
        cout<<"black\n";
        return 0;
    }
    if(x*y<0)
    c++;
    if(c%2==0)
    cout<<"black";
    else cout<<"white";
    return 1;
}
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    MagicClocl(x,y);
    return 0;
}
