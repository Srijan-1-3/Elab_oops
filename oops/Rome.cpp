/* Rome the capital city of Lazio Region is rectangular in shape with the size n x m meters. */

#include <iostream>

using namespace std;

template <class Celebration>
Celebration Rome(Celebration a,Celebration b,Celebration c){
    cout<<((b+c-1)/c)*((a+c-1)/c);
    return 1;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    Rome(a,b,c);
    return 0;
}
