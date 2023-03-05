/* The Electricity Officer has mentioned the total counts of unit and amount. The officer inform the customer the bill amount in a unique format. */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int unitconsumed,costperunit;
    try{
        cin>>unitconsumed;
        cin>>costperunit;
        long int res;
        res=pow(unitconsumed,costperunit);
        if(cin){
            cout<<res;
        }
        else 
        throw 0;
    }
    catch(int unit){
        cout<<"Incomplete Data";
    }
    return 0;
}
