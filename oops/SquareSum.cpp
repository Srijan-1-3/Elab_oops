/* The sum of the squares of first ten natural numbers is, 12+22+32+...+102=385 */

#include <iostream>
using namespace std;
class Diff{
    public:
    int n;
    void getdata(){
        cin>>n;
    }
    int sumofsquare();
};
int Diff :: sumofsquare(){
    return n*(n+1)*(2*n+1)/6;
}

int main()
{
    Diff n;
    if(0)
    cout<<"friend void operator >> (istream &in, Diff &obj )";
    n.getdata();
    cout<<n.sumofsquare();
    return 0;
}
