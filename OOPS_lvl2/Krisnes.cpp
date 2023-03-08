/* Krisnes have an unlimited number of coins with values 1,2,...n. You want to select some set of coins having the total value of S. */

#include <iostream>
using namespace std;
class getInput{
    public:
    int n,s;
    void read(){
    cin>>n>>s;
    }
};
class Divide:public getInput{
    public:
    void write(){
        if(n<s){
        if(s%n==0)
        cout<<s/n;
        else
        cout<<s/n+1;
        }
    else
    cout<<"1";
    }
};
int main()
{
    Divide div;
    div.read();
    div.write();
}
