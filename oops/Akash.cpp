/* Akash got the problem with the following description in his UPSC Examination: 
Let's define the S(x) to be the sum of digits of number x written in decimal system. */

#include <iostream>
using namespace std;
void h(){}
int main()
{   int t;
    cin>>t;
    while(t--){
        int n,i=0;
        cin>>n;
        while(10*i+9<=n)
            i++;
        cout<<i<<endl;
    }
    return 0;
    cout<<"template <class Interesting> Interesting Digits(Interesting t) Digits(t);";
}
