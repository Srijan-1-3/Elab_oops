/* Phoenix mall in the capital city of Washington and it is rectangular in shape when it is seen on the map with the size n x m meters. */

#include <iostream>
using namespace std;
int main()
{
    int n,m,a;
    try{
        cin>>n>>m>>a;
        if(cin){
            cout<<((n+a-1)/a)*((m+a-1)/a);
        }
        else 
        throw 0;
    }
    catch(int dimension){
        cout<<"Invalid Dimension";
    }
	return 0;
}
