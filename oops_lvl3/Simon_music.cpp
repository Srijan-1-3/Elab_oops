/* Simon loves to listen to music while walking his way to attend boring lectures in his college */

#include <iostream>
using namespace std;
int main()
{
    int L,D;
    cin>>L>>D;
    if((D*2)%L==0)
        cout<<(D*2)/L;
    else
        cout<<((D*2)/L)+1;
    return 0;
}
