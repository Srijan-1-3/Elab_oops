/* Rohini an GATE Trainer. During his preparation for tommororws's session on Number Systems */

#include <iostream>
#include<math.h>
using namespace std;
class ChangeBase{
    public:
    void sumBase(int n,int k){
    int ans=0;
    while(n>0){
        ans+=n%k;
        n/=k;
    }
    cout<<ans;
}
};

int main()
{
    int n,k;
    cin>>n>>k;
    ChangeBase Convert;
    Convert.sumBase(n,k);
    return 0;
}
