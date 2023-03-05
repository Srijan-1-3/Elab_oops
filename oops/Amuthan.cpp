/* Amuthan has the practice of feeding the underpriveliged kids with the money he has. */

#include <iostream>
using namespace std;
int main()
{
    int donuts,milk;
    try{
        cin>>donuts;
        cin>>milk;
        if(milk==0)
        throw donuts;
        else
        cout<<"You have "<<(float)donuts/milk<<" donuts for each glass of milk";
    }
    catch(int e){
        cout<<e<<" donuts and No Milk\nGo buy some milk";
    }
	return 0;
}
