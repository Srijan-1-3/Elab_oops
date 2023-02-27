/* Store keeper of super market is finding it difficult to keep track of the stocks in the shop */

#include <iostream>
using namespace std;
class Store{
    public:
    void itemcount(int id){
        cout<<id<<endl;
    }
    void itemcount(int totalavl,int consumed){
        cout<<totalavl - consumed<<endl;
    }
};
int main()
{
    Store purchase;
    int id,totalavl,consumed;
    cin>>id>>totalavl>>consumed;
    purchase.itemcount(id);
    purchase.itemcount(totalavl,consumed);
	return 0;
}
