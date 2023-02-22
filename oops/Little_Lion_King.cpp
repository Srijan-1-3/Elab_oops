/* A Little lion king and his friends from the zoo like candies very much */

#include <iostream>
using namespace std;
int main()
{int T,N,C;
cin>> T;
while(T--){
    cin>>N>>C;
    int arr,i,s=0;
    for(i=0;i<N;i++){
        cin>>arr;
        s+=arr;
    }
    if(C<s) cout<<"No\n";
    else cout<<"Yes\n";
}
    return 0;
}
