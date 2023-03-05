/* Zaheer is a higher secondary school maths teacher */

#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
        int k;
    try{
        cin>>k;
        if(cin)
        cout<<fixed<<setprecision(0)<<tgamma(k+1);
        else
        throw "e";
    }
    catch (int i){
    }
    catch (const char *exp){
        cout<<"Input should be a Integer";
    }
	return 0;
}
