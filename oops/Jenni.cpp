/* Jenni had a square painted on a piece of paper, the square's side equals m meters */

#include <iostream>
using namespace std;
template <class Paper>
Paper Square(Paper T){
    if(T%2==0)
    return 4*T+1;
    else if(T%4==1)
    return 2*T+1;
    else
    return T+1;
}
int main()
{
    int T,n;
    cin>>T;
    while(T--){
        cin>>n;
        cout<<Square(n)<<endl;
    }
    return 0;
}
