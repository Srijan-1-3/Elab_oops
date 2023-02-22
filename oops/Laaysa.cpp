/* Laaysa with her friends going to the theatre for a movie */

#include <iostream>
using namespace std;
int main(){
    int N;
    int i,j,k;
    cin>>N;
    for(i=1;i<=N;i++){
        if(i%2==0)
        {
            k=2;
        }
        else
        {
            k=1;
        }
        for(j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k+=2;
        }
        cout<<""<<"\n";}
    return 0;}
