/* Fahad is the owner of one of the biggest Super Market in the city */

#include <iostream>
using namespace std;
class ITEM  
{
    public:
    int n;
    float large=0,summ=0;
    float arr[100],code[100];
    void getdata(int b){
        n=b;
        for(int i=0;i<n;i++)
        cin>>code[i]>>arr[i];
    }
    void largest(){
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=large)
            large=arr[i];
        }
    }
    void sum(){
        for(int i=0;i<n;i++)
        summ+=arr[i];
    }
    void displayitems(){
        cout<<"Largest Price="<<large<<endl;
        cout<<"Sum of Prices="<<summ<<endl;
        cout<<"Code and Price"<<endl;
        for(int i=0;i<n;i++)
        cout<<code[i]<<" and "<<arr[i]<<endl;
    }
    
};
using namespace std;
int main()
{
    ITEM order;
    int b;
    cin>>b;
    order.getdata(b);
    order.largest();
    order.sum();
    order.displayitems();
	return 0;
}
